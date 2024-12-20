//more on friends.........................................................
//add two number using classes
#include<iostream>
using namespace std;

class y;                //declaration

class x{
    int a;
    friend int sum(x,y);
    public:
    void setdata(int value){
        a=value;
    }
};

class y{
    int b;
    friend int sum(x,y);
    public:
    void setdata(int value){
        b=value;
    }
};

int sum(x o1,y o2){
    cout<<o1.a+o2.b<<endl;
}
int main(){                
    x a1;
    y b1;

    a1.setdata(52);
    b1.setdata(7);

    sum(a1,b1);
    return 0;
};