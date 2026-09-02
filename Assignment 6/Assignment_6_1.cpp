#include <iostream>
using namespace std;
class Product
{
private:
  int id;
  string title;
  double price;

public:
  Product(void) : id(0), title("") ,price(0.0){}
  Product(int id, string title,double price) : id(id), title(title), price(price) {}
  void setId(int id)
  {
    this->id = id;
  }
  int getId(void)
  {
    return id;
  }
  void setTitle(string title)
  {
    this->title = title;
  }
  string getTitle(void)
  {
    return title;
  }
  void setPrice(double price)
  {
    this->price = price;
  }
  double getPrice(void)
  {
    return price;
  }

  virtual void acceptRecord(void)
  {
    cout << "Enter the id:";
    cin >> id;
    cout << "Enter the title";
    cin >> title;
    cout<<"Enter the price:";
    cin >> price;
  }
  virtual void printRecord(void)
  {
    cout << "id:" << id << endl;
    cout << "title:" << title << endl;
    cout << "price:" << price << endl;
  }

  virtual double getFinalPrice(void)
  {
    return price;
  }

  virtual ~Product() {}
};
class Book : public Product
{
private:
  string author;

public:
  Book(void) : author("") {}
  Book(int id,string title,  double price,string author) :Product(id, title, price), author(author) {}
  void acceptRecord(void)
  {

    Product::acceptRecord();
    cout<< "Enter the author:";
    cin >> author;
  }
  void printRecord(void)
  {

    Product::printRecord();
    cout<< "author:" << author <<endl;
  }
  double getFinalPrice(void)
  {
    return getPrice() * 0.90;
  }
};
class Tape : public Product
{
private:
  string artist;

public:
  Tape(void) : artist("") {}
  Tape(int id,string title,double price,string artist) : Product(id, title, price), artist(artist) {}
  void acceptRecord(void)
  {

    Product::acceptRecord();
    cout<< "Enter the artist:";
    cin >> artist;
  }
  void printRecord(void)
  {

    Product::printRecord();
    cout<< "artist:" << artist <<endl;
  }

  double getFinalPrice(void)
  {
    return getPrice() * 0.95;
  }
};

  int menuList(void)
  {
    int choice;
    cout << "1.Book" << endl;
    cout << "2.Tape" << endl;
    cout << "Enter the choice : ";
    cin >> choice;
    return choice;
  }
  int main()
{
    Product* arr[3];

    double total = 0;

    for(int i = 0; i < 3; i++)
    {
        int choice = menuList();

        if(choice == 1)
        {
            arr[i] = new Book();
        }
        else
        {
            arr[i] = new Tape();
        }

        arr[i]->acceptRecord();
    }

    cout<<"BILL"<<endl;

    for(int i = 0; i < 3; i++)
    {
        arr[i]->printRecord();

        cout << "Final Price: "<< arr[i]->getFinalPrice()<< endl;

        total = total + arr[i]->getFinalPrice();

        cout << endl;
    }

    cout << "Total Bill: " << total << endl;

    for(int i = 0; i < 3; i++)
    {
        delete arr[i];
    }

    return 0;
}
