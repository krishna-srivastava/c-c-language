//constructor in derived class....................................................................
#include<iostream>
using namespace std;

class base1{
    protected:
    int data1;
    public:
    base1(int a){
        data1=a;
    }
    void printdata1(){
        cout<<"the value of data1 is "<<data1<<endl;
    }
};

class base2{
    protected:
    int data2;
    public:
    base2(int a){
        data2=a;
    }
    void printdata2(){
        cout<<"the value of data2 is "<<data2<<endl;
    }
};

class derived:public base1,public base2{
    int derived1,derived2;
    public:
    derived(int a,int b,int c,int d):base1(a),base2(b){
        derived1=c;
        derived2=d;
        cout<<"the derived class constructor called...................."<<endl;
    }
    void display(){
        cout<<"the derived1: "<<derived1<<endl;
        cout<<"the derived2: "<<derived2<<endl;
    }
};

int main(){
    derived d(1,3,4,6);
    d.printdata2();
    return 0;
};