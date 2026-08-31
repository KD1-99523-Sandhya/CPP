#include<iostream> 
using namespace std; 

class Date
{
    private: 
    int day; 
    int month; 
    int year;
    public: 
    Date( void ) : day(0) , month(0) , year(0)
    {   }
    Date(int day , int month , int year) : day(day) , month(month) , year(year)
    {   }
    void accept( void )
    {
        cout<<"Day : "; 
        cin>>day; 
        cout<<"Month : "; 
        cin>>month; 
        cout<<"Year : "; 
        cin>>year; 
    }
    void display( void )
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl; 
    }
}; 

class Person 
{
    private: 
    string name; 
    string address; 
    Date birthdate; 
    public: 
    Person( void ) : name("") , address("")
    {   }
    Person(string name, string address, Date birthdate) : name(name), address(address), birthdate(birthdate) {}
    void accept( void )
    {
        cout<<"Name : "; 
        cin>>name; 
        cout<<"Address : "; 
        cin>>address; 
        cout<<"Enter BirthDate : "; 
        this->birthdate.accept( ); 
    }
    void display( void )
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Address : "<<address<<endl; 
        cout<<"BirthDate : ";  
        this->birthdate.display( ); 
    }
};

class Student 
{
    private: 
    int id; 
    double marks; 
    string course; 
    Date joiningDate; 
    Date endDate;      
    public: 
    Student( void ) : id(0) , marks(0.0) , course("")
    {   }
    Student(int id , double marks , string course , Date joiningDate , Date endDate) : id(id) , marks(marks) , course(course) , joiningDate(joiningDate) , endDate(endDate){ }
    void accept( void )
    {
        cout<<"Id : "; 
        cin>>id; 
        cout<<"Marks : "; 
        cin>>marks; 
        cout<<"Course : "; 
        cin>>course; 
        cout<<"Enter JoiningDate : "; 
        this->joiningDate.accept( ); 
        cout<<"Enter EndDate : "; 
        this->endDate.accept( ); 
    }
    void display( void )
    {
        cout<<"Id : "<<id<<endl;
        cout<<"Marks : "<<marks<<endl; 
        cout<<"Course : "<<course<<endl;
        cout<<"JoiningDate : ";  
        this->joiningDate.display( ); 
        cout<<"EndDate : ";  
        this->endDate.display( ); 
    }
};

int main()
{
    Person p1; 
    p1.accept( ); 
    p1.display( ); 

    Date d1(15, 8, 1995);
    Person p2("Nilesh", "Pune", d1);
    p2.display();


    Student s1; 
    s1.accept( ); 
    s1.display( ); 

    return 0;
}