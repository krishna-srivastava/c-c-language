//template(multiple parameter & default parameter).........................................
#include<iostream>
using namespace std;

template <class d1=int,class d2=float>

class myclass{
    public:
    d1 data1;
    d2 data2;
    myclass(d1 a, d2 b){
        data1=a;
        data2=b;
    }
    void display(){
        cout<<data1<<endl<<data2<<endl;
    }
};

int main(){
    myclass <int,char> data(69,'g');
    data.display();
    return 0;
};