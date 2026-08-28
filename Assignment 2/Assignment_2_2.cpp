#include<iostream>
using namespace std;

class tollbooth{
  private:
  unsigned int totalCars;
  double totalMoney;

  public:

  tollbooth(void){
    totalCars=0;
    totalMoney=0.0;
  }
  void payingCar(){
    totalCars++;
    totalMoney =totalMoney + 0.50;

  }

  void nopayCar(){
    totalCars++;
  }

  void printOnConsole(){

    unsigned int payingCars=totalMoney/0.50;
    unsigned int nopayCars= totalCars- payingCars;
    cout<<"total number of cars:"<<totalCars<<endl;
    cout<<"total money collected:"<<totalMoney<<endl;
    cout<<"paying cars:"<<payingCars<<endl;
    cout<<"non paying cars:"<<nopayCars<<endl;

  }
};

int main(){
  tollbooth booth;
  
  booth.payingCar();
  booth.payingCar();
  booth.nopayCar();
  booth.payingCar();
  booth.nopayCar();
  booth.payingCar();

  booth.printOnConsole();

  return 0;

}
