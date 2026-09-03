#include <iostream>
#include <memory>
using namespace std;

class Student
{
private:
    int marks;

public:
    Student()
    {
        marks = 0;
    }

    void accept()
    {
        cout << "Enter Marks: ";
        cin >> marks;

        if(marks < 0)
            throw "Invalid Marks";
    }

    void display()
    {
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    try
    {
        unique_ptr<Student> s(new Student);

        s->accept();
        s->display();
    }
    catch(...)
    {
        cout << "Invalid input" << endl;
    }

    return 0;
}
