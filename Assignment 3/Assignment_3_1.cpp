#include<iostream>
using namespace std;

class Cylinder
{
    private:
    double radius;              
    double height;              
    static const double PI;     

    public:
    Cylinder(void):radius(0.0), height(0.0)
    {   }

  
    Cylinder(double radius, double height):radius(radius), height(height)
    {   }

    double getRadius()
    {
        return radius;
    }

    void setRadius(double radius)
    {
        this->radius = radius;
    }

    double getHeight()
    {
        return height;
    }

    void setHeight(double height)
    {
        this->height = height;
    }

    double calculateVolume()
    {
        return PI * radius * radius * height;
    }
};

const double Cylinder :: PI = 3.14;


int main()
{
    double r, h;

    cout<<"Enter radius of Cylinder : ";
    cin>>r;
    cout<<"Enter height of Cylinder : ";
    cin>>h;

    Cylinder c1(r,h);
    cout<<"Cylinder Volume : "<<c1.calculateVolume()<<endl;

    return 0;
}