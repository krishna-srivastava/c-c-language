//freind function..................................................
#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    void setnum(int x,int y){
        a=x;
        b=y;
    }
    friend complex sumcomplex(complex o1, complex o2);
    void print(void){
        cout<<"the complex num is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.setnum((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    complex c1,c2,sum;
    c1.setnum(1,2);
    c1.print();

    c2.setnum(3,4);
    c2.print();

    sum=sumcomplex(c1,c2);
    sum.print();
    return 0;
};
