#include<iostream>
#include<string>
using namespace std;

class Electric_bill{
private:
    double amount_paid;
public:
    Electric_bill(double ap){
        amount_paid=ap;

    }

    void getpart(){


    }

    void setamountpaid(double a){
        amount_paid=a;
        if(amount_paid<0){
                  amount_paid=0;
              }
    }

    double getVat(){
        return amount_paid * 0.18;
    }
    double getEWURA(){
        return amount_paid *0.1;
    }
    double getREA(){
        return amount_paid *0.03;
    }
    double getunits(){

        return (amount_paid-getVat()-getREA()-getEWURA()-5000)/295;

    }

    void output(){

        cout<<"Amount Paid:"<<amount_paid<<"\nVAT 18%:"<<getVat()<<"\nEUWRA:"<<getEWURA()<<"\nREA:"<<getREA()<<"\nDeducted Fixed Charges 5000Shiling "<<"\nUnit:"<<getunits()<<endl;
    }
    };
int main()
{
    double amount;
    cout<<"Amount of Tanzanian Shillings:";
    cin>>amount;
    Electric_bill eb(amount);
    eb.output();
    return 0;
}
