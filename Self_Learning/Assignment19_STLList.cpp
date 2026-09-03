#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    list<int> l;

    srand(time(0));

    for(int i = 0; i < 10; i++)
        l.push_back(rand() % 100);

    cout << "Original List:\n";

    for(list<int>::iterator it = l.begin(); it != l.end(); it++)
        cout << *it << " ";

    cout << "\n\nReverse List:\n";

    for(list<int>::reverse_iterator it = l.rbegin(); it != l.rend(); it++)
        cout << *it << " ";

    for(list<int>::iterator it = l.begin(); it != l.end(); it++)
        *it = *it + 5;

    cout << "\n\nAfter Increment:\n";

    for(list<int>::const_iterator it = l.begin(); it != l.end(); it++)
        cout << *it << " ";

    l.sort();

    cout << "\n\nSorted List:\n";

    for(list<int>::iterator it = l.begin(); it != l.end(); it++)
        cout << *it << " ";

    cout << endl;

    return 0;
}
