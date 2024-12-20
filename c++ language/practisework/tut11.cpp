//copy constructor............................................................
#include<iostream>
using namespace std;

class number{
    int a;
    public:
    number(){
        a=0;
    }
    number(int num){
        a=num;
    }
    number(number &obj){
        cout<<"hello beta"<<endl;
        a=obj.a;
    }
    void display(){
        cout<<"the number is "<<a<<endl;
    }
};
int main(){
    number n1,n2(22),n3(33);
    n1.display();
    n2.display();
    n3.display();

    number x=n2;
    x.display();

    number n4(n3);
    n4.display();

    number n5(n2);
    n5.display();
    return 0;
};