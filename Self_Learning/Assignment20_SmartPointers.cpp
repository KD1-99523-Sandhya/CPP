#include <iostream>
#include <memory>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Student Created" << endl;
    }

    ~Student()
    {
        cout << "Student Destroyed" << endl;
    }

    void display()
    {
        cout << "Student Object" << endl;
    }
};

int main()
{
    cout << "Unique Pointer\n";

    unique_ptr<Student> p1(new Student);
    p1->display();

    unique_ptr<Student> p2 = move(p1);

    if(p1 == NULL)
        cout << "Ownership transferred to p2" << endl;

    cout << "\nShared Pointer\n";

    shared_ptr<Student> s1(new Student);
    shared_ptr<Student> s2 = s1;

    cout << "Reference Count: " << s1.use_count() << endl;

    cout << "\nWeak Pointer\n";

    weak_ptr<Student> w = s1;

    if(!w.expired())
        cout << "Object is still available" << endl;

    return 0;
}
