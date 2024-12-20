//templates...........................................................
#include<iostream>
using namespace std;

template <class T>

class complex{
    T a,b;
    public:
    void setdata(T x,T y){
        a=x;
        b=y;
    }
    void sumcomplex(complex o1,complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void print(void){
        cout<<"the complex num is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    complex <float> c1,c2,c3;
    c1.setdata(2,2);
    c1.print();
    c2.setdata(0.4,0.4);
    c2.print();
    c3.sumcomplex(c1,c2);
    c3.print();


    complex <int> c4,c5,c6;
    c4.setdata(1,2);
    c4.print();
    c5.setdata(4,3);
    c5.print();
    c6.sumcomplex(c4,c5);
    c6.print();
    return 0;
};