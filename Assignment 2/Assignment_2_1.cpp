#include<iostream>
using namespace std;
class box{
  private:
  double length;
  double breadth;
  double height;
  public:
  box(void){
    length=1;
    breadth=1;
    height=1;

  }
  box(double value){
    length=value;
    breadth=value;
    height=value;
  }
  box(double l,double b,double h){
    length=l;
    breadth=b;
    height=h;
  }

  double calculateVolume(){
    return length*breadth*height;
  }

};


int main(){
  int choice;
  cout<<"1.calculate volume with default values"<<endl;
  cout<<"2.calculate volume with same length,breadth and height"<<endl;
  cout<<"3.calculate volume with different length,breadth and height"<<endl;

  cout<<"enter the choice:";
  cin>>choice;

  switch(choice)
  {
    case 1:
    {
      box b1;

      cout<<"volume= "<<b1.calculateVolume()<<endl;
      break;

    }

    case 2:
    {
      double value;

      cout<<"enter value:";
      cin>>value;

      box b2(value);

      cout<<"volume=  "<<b2.calculateVolume()<<endl;
      break;


    }
    case 3:
    {
      double length,breadth,height;

      cout<<"enter length:";
      cin>>length;

      cout<<"enter breadth:";
      cin>>breadth;

      cout<<"enter height";
      cin>>height;

      box b3(length,breadth,height);

      cout<<"volume ="<<b3.calculateVolume()<<endl;
      break;
    }

    default:
    {
      cout<<"invalid choice!"<<endl;
    }

  }

  return 0;
  
}
