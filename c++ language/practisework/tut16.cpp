//multiple inheritence...............................................................
#include<iostream>
using namespace std;

class base1{
    protected:
    int a;
    public:
    void setdata1(int x){
        a=x;
    }
    void getdata1(){
        cout<<"the number is "<<a<<endl;
    }
};

class base2{
    protected:
    int b;
    public:
    void setdata2(int x){
        b=x;
    }
    void getdata2(){
        cout<<"the number is "<<b<<endl;
    }
};

class derived:public base1,public base2{
    int c;
    public:
    void display(){
        getdata1();
        getdata2();
        c=a+b;
        cout<<"the sum of "<<a<<" + "<<b<<" is "<<c;
    }
};

int main(){
    derived a;
    a.setdata1(12);
    a.setdata2(12);
    a.display();
    return 0;
};