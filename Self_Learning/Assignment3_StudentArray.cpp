#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    float marks;

public:
    void accept()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "Roll No: " << rollNo;
        cout << " Marks: " << marks << endl;
    }

    float getMarks()
    {
        return marks;
    }
};

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student *s = new Student[n];

    for(int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        s[i].accept();
    }

    cout << "\nStudent Records\n";

    for(int i = 0; i < n; i++)
        s[i].display();

    float highest = s[0].getMarks();

    for(int i = 1; i < n; i++)
    {
        if(s[i].getMarks() > highest)
            highest = s[i].getMarks();
    }

    cout << "\nHighest Marks: " << highest << endl;

    delete[] s;

    return 0;
}
