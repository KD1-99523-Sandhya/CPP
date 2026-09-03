#include <iostream>
#include <string>
using namespace std;

class InvalidMarks
{
private:
    string message;

public:
    InvalidMarks(string message)
    {
        this->message = message;
    }

    string getMessage()
    {
        return message;
    }
};

class Student
{
private:
    int rollNo;
    float marks;

public:
    void setRollNo(int rollNo)
    {
        this->rollNo = rollNo;
    }

    void setMarks(float marks)
    {
        if(marks < 0)
            throw InvalidMarks("Marks cannot be negative");

        this->marks = marks;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    try
    {
        s.setRollNo(1);
        s.setMarks(-10);

        s.display();
    }
    catch(InvalidMarks e)
    {
        cout << e.getMessage() << endl;
    }

    return 0;
}
