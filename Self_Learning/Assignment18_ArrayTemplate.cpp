#include <iostream>
using namespace std;

template <class T>
class Array
{
private:
    T *arr;
    int size;

public:
    Array(int size)
    {
        this->size = size;
        arr = new T[size];
    }

    void accept()
    {
        for(int i = 0; i < size; i++)
            cin >> arr[i];
    }

    void display()
    {
        for(int i = 0; i < size; i++)
            cout << arr[i] << " ";

        cout << endl;
    }

    T& operator[](int index)
    {
        return arr[index];
    }

    Array operator+(Array a)
    {
        Array temp(size);

        for(int i = 0; i < size; i++)
            temp.arr[i] = arr[i] + a.arr[i];

        return temp;
    }

    ~Array()
    {
        delete[] arr;
    }
};

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    Array<int> a(n);
    Array<int> b(n);

    cout << "Enter first array:\n";
    a.accept();

    cout << "Enter second array:\n";
    b.accept();

    cout << "\nFirst Array: ";
    a.display();

    cout << "Second Array: ";
    b.display();

    Array<int> c = a + b;

    cout << "Addition: ";
    c.display();

    return 0;
}
