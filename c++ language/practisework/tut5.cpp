//freinds classes..................................................................
#include<iostream>
using namespace std;

class complex;

class calculator{
    public:
    int realsum(complex,complex);
    int nonrealsum(complex,complex);
};
class complex{
    int a,b;
    friend int calculator::realsum(complex,complex);
    friend int calculator::nonrealsum(complex,complex);
    public:
    void setdata(int n1,int n2){
        a=n1;
        b=n2;
    }
    void getdata(){
        cout<<"you number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int calculator::realsum(complex o1,complex o2){
        return (o1.a+o2.a);
};
int calculator::nonrealsum(complex o1,complex o2){
        return (o1.b+o2.b);
};

int main(){
    complex o1,o2;
    o1.setdata(6,9);
    o1.getdata();
    
    o1.setdata(6,9);
    o1.getdata();

    calculator calc;
    int res=calc.realsum(o1,o2);
    cout<<"your sum is "<<res<<endl;
    
    int resc=calc.nonrealsum(o1,o2);
    cout<<"your sum is "<<resc<<endl;
    return 0;
};