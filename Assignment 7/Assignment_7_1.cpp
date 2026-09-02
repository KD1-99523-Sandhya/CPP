#include <iostream>
using namespace std;

class Product
{
private:
    int id;
    string title;
    double price;

public:
    Product(void) : id(0), title(" "), price(0.0)
    {

    }
    virtual void acceptRecord(void)
    {   cout<<"Id :";
        cin>>id;
        cout<<"Title :";
        cin>>title;
        cout<<"Price : ";
        cin>>price;
    }

    virtual void printRecord(void)
    {
        cout<<"Id :"<<id<<endl;
        cout<<"Title :"<<title<<endl;
        cout <<"Price : "<< price <<endl;
    }

    double getPrice(void)
    {
        return price;
    }

    virtual double calculatePrice(void) = 0;

    virtual ~Product()
    {
    }
};


class Book : public Product
{
private:
    string author;

public:
    Book(void) : author(" ")
    {
    }

    virtual void acceptRecord(void)
    {
        Product::acceptRecord();
        cout << "Author : ";
        cin >> author;
    }

    virtual void printRecord(void)
    {
        Product::printRecord();
        cout<<"Author :"<<author<<endl;
    }

    virtual double calculatePrice(void)
    {
        double price=getPrice();
        double discount=price*10/100;
        return price-discount;
    }
};


class Tape : public Product
{
    private:
    string artist;

    public:
    Tape(void) : artist(" ")
    {
    }
    virtual void acceptRecord(void)
    {
        Product::acceptRecord();
        cout << "Artist : ";
        cin >> artist;
    }

    virtual void printRecord(void)
    {
        Product::printRecord();
        cout << "Artist : "<<artist<<endl;
    }

    virtual double calculatePrice(void)
    {
        double price=getPrice();
        double discount=price*5/100;
        return price-discount;
    }
};

int menuList(void)
{
    int choice;
    cout <<"\n0. Exit"<<endl;
    cout <<"1. Book"<<endl;
    cout <<"2. Tape"<<endl;
    cout <<"Enter the choice : ";

    cin >> choice;
    return choice;
}


int main()
{
    Product *arr[3];
    double finalBill = 0.0;
    for (int index = 0; index < 3; index++)
    {   int choice;
        cout<<"\nEnter Product "<<index+1<<endl;
        choice=menuList();

        switch(choice)
        {
        case 1:
            arr[index] = new Book();
            break;

        case 2:
            arr[index] = new Tape();
            break;

        default:
            cout<<"Invalid choice"<<endl;
            index--; 
            continue;
        }
        arr[index]->acceptRecord();
        finalBill = finalBill + arr[index]->calculatePrice();
    }
    cout << "\n--Purchased Products --"<<endl;

    for (int index = 0; index < 3; index++)
    {   arr[index]->printRecord();
        cout <<"Discounted Price : "
             <<arr[index]->calculatePrice()
             <<endl;
    }
    cout<<"\nFinal Bill : "<<finalBill<<endl;

    for (int index = 0; index < 3; index++)
    {
        delete arr[index];
        arr[index] = NULL;
    }

    return 0;
}