#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    virtual void work() = 0;
};

class Student : public Person
{
private:
    float marks;

public:
    Student(string name, int age, float marks)
        : Person(name, age)
    {
        this->marks = marks;
    }

    void study()
    {
        cout << "Student is studying" << endl;
    }

    void work()
    {
        cout << "Student is doing academic work" << endl;
    }
};

class Teacher : public Person
{
private:
    double salary;

public:
    Teacher(string name, int age, double salary)
        : Person(name, age)
    {
        this->salary = salary;
    }

    void teach()
    {
        cout << "Teacher is teaching" << endl;
    }

    void work()
    {
        cout << "Teacher is doing teaching work" << endl;
    }
};

int main()
{
    Student s("Rahul", 20, 85);
    Teacher t("Patil", 40, 50000);

    Person *p;

    p = &s;
    p->display();
    p->work();
    s.study();

    cout << endl;

    p = &t;
    p->display();
    p->work();
    t.teach();

    return 0;
}
