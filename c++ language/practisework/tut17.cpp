//calculator.......................................................................
#include<iostream>
#include<cmath>
using namespace std;

class simplecalculator{
    protected:
    double num1,num2;
    public:
    void setdata_simplecalc(double a,double b){
        num1=a;
        num2=b;
    }
    void display(){
        cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
        cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
        cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
        cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
    }
};

class scientific_calculator{
    protected:
    double num1,num2;
    public:
    void setdata_scientificcalc(double a,double b){
        num1=a;
        num2=b;
    }
    void display(){
        cout<<"the value of sin(a) is "<<sin(num1)<<endl;
        cout<<"the value of cos(a) is "<<cos(num1)<<endl;
        cout<<"the value of tan(b) is "<<tan(num2)<<endl;
        cout<<"the power(num1,num2) is "<<pow(num1,num2)<<endl;
    }
};

int main(){
    double num1,num2;
    cout<<"enter the number1: "<<endl;
    cin>>num1;
    cout<<"enter the number2: "<<endl;
    cin>>num2;

    simplecalculator calc;
    calc.setdata_simplecalc(num1,num2);
    calc.display();

    scientific_calculator calsi;
    calsi.setdata_scientificcalc(num1,num2);
    calsi.display();
    return 0;
};