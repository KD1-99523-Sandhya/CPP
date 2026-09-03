#include <iostream>
using namespace std;

class Matrix
{
private:
    int a[2][2];

public:
    void accept()
    {
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
                cin >> a[i][j];
        }
    }

    void display()
    {
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
                cout << a[i][j] << " ";

            cout << endl;
        }
    }

    Matrix operator+(Matrix m)
    {
        Matrix temp;

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
                temp.a[i][j] = a[i][j] + m.a[i][j];
        }

        return temp;
    }

    Matrix operator-(Matrix m)
    {
        Matrix temp;

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
                temp.a[i][j] = a[i][j] - m.a[i][j];
        }

        return temp;
    }

    Matrix operator*(Matrix m)
    {
        Matrix temp;

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                temp.a[i][j] = 0;

                for(int k = 0; k < 2; k++)
                    temp.a[i][j] += a[i][k] * m.a[k][j];
            }
        }

        return temp;
    }
};

int main()
{
    Matrix m1, m2, m3;

    cout << "Enter Matrix 1:\n";
    m1.accept();

    cout << "Enter Matrix 2:\n";
    m2.accept();

    m3 = m1 + m2;
    cout << "\nAddition:\n";
    m3.display();

    m3 = m1 - m2;
    cout << "\nSubtraction:\n";
    m3.display();

    m3 = m1 * m2;
    cout << "\nMultiplication:\n";
    m3.display();

    return 0;
}
