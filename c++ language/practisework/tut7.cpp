//more on friends.........................................................
//how to swap to number using classes.
#include<iostream>
using namespace std;

class y;                //declaration

class x{
    int a;
    friend int swap(x &,y&);
    public:
    void setdata(int value){
        a=value;
    }
    void display(){
        cout<<a;
    }
};

class y{
    int b;
    friend int swap(x &,y &);
    public:
    void setdata(int value){
        b=value;
    }
    void display(){
        cout<<b<<endl;
    }
};

int swap(x & o1,y & o2){
    int temp=o1.a;
    o1.a=o2.b;
    o2.b=temp;
}
int main(){                
    x a1;
    y b1;

    a1.setdata(0);
    b1.setdata(7);

    cout<<"the before swap number is ";
    a1.display();
    cout<<" and ";
    b1.display();

    swap(a1,b1);

    cout<<"the after swap number is ";
    a1.display();
    cout<<" and ";
    b1.display();
    return 0;
};