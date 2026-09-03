#include <iostream>
#include <string>
using namespace std;

class Product
{
protected:
    string title;
    double price;

public:
    virtual void accept()
    {
        cout << "Enter Title: ";
        cin >> title;

        cout << "Enter Price: ";
        cin >> price;
    }

    virtual void display()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }

    virtual void showExtra() = 0;

    virtual ~Product()
    {
    }
};

class Book : public Product
{
private:
    int pages;

public:
    void accept()
    {
        Product::accept();

        cout << "Enter Pages: ";
        cin >> pages;
    }

    void display()
    {
        Product::display();
        cout << "Pages: " << pages << endl;
    }

    void showExtra()
    {
        cout << "Pages: " << pages << endl;
    }
};

class Tape : public Product
{
private:
    float playtime;

public:
    void accept()
    {
        Product::accept();

        cout << "Enter Playtime: ";
        cin >> playtime;
    }

    void display()
    {
        Product::display();
        cout << "Playtime: " << playtime << endl;
    }

    void showExtra()
    {
        cout << "Playtime: " << playtime << endl;
    }
};

int main()
{
    Product *arr[5];
    int choice;

    for(int i = 0; i < 5; i++)
    {
        cout << "\n1. Book\n2. Tape\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1)
            arr[i] = new Book;
        else
            arr[i] = new Tape;

        arr[i]->accept();
    }

    cout << "\nProduct Details\n";

    for(int i = 0; i < 5; i++)
        arr[i]->showExtra();

    for(int i = 0; i < 5; i++)
        delete arr[i];

    return 0;
}
