#include <iostream>
#include <string>
using namespace std;

namespace college
{
    class Student
    {
    private:
        int id;
        string name;

    public:
        Student()
        {
            id = 0;
            name = "";
        }

        void setId(int id)
        {
            this->id = id;
        }

        void setName(string name)
        {
            this->name = name;
        }

        int getId()
        {
            return id;
        }

        string getName()
        {
            return name;
        }

        void display()
        {
            cout << "Student ID: " << id << endl;
            cout << "Student Name: " << name << endl;
        }
    };

    class Teacher
    {
    private:
        int id;
        string name;

    public:
        Teacher()
        {
            id = 0;
            name = "";
        }

        void setId(int id)
        {
            this->id = id;
        }

        void setName(string name)
        {
            this->name = name;
        }

        int getId()
        {
            return id;
        }

        string getName()
        {
            return name;
        }

        void display()
        {
            cout << "Teacher ID: " << id << endl;
            cout << "Teacher Name: " << name << endl;
        }
    };
}

int main()
{
    college::Student s;
    college::Teacher t;

    s.setId(1);
    s.setName("Rahul");

    t.setId(101);
    t.setName("Patil");

    s.display();

    cout << endl;

    t.display();

    return 0;
}
