//using class

#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:

    void initDate()
    {
        day = 1;
        month = 1;
        year = 2000;
    }

    void printDateOnConsole()
    {
        cout << "Date: ";

        if(day < 10)
            cout << "0";

        cout << day << "/";

        if(month < 10)
            cout << "0";

        cout << month << "/" << year << endl;
    }

    void acceptDateFromConsole()
    {
        cout << "Enter day: ";
        cin >> day;

        cout << "Enter month: ";
        cin >> month;

        cout << "Enter year: ";
        cin >> year;
    }

    bool isLeapYear()
    {
        if((year % 400 == 0) ||
           (year % 4 == 0 && year % 100 != 0))
        {
            return true;
        }

        return false;
    }
};

int main()
{
    Date date;
    int choice;

    do
    {
        cout << "1. Initialize Date\n";
        cout << "2. Accept Date\n";
        cout << "3. Print Date\n";
        cout << "4. Check Leap Year\n";
        cout << "0. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                date.initDate();
                cout << "Date initialized successfully.\n";
                break;

            case 2:
                date.acceptDateFromConsole();
                break;

            case 3:
                date.printDateOnConsole();
                break;

            case 4:
                if(date.isLeapYear())
                    cout << "It is a leap year.\n";
                else
                    cout << "It is not a leap year.\n";
                break;


            default:
                cout << "Invalid choice.\n";
        }

    } while(choice != 0);

    return 0;
}