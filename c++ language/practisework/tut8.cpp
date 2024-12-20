// introduction to constructor......................................................
#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(void);//declaration
    void getdata(){
        cout<<"you number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex::complex(void){
    a=22;
    b=15;
    cout<<"teri ma ka bharosa"<<endl;
}
int main(){
    complex c1,c2,c3,c4;
    c1.getdata();
    c2.getdata();
    c3.getdata();
    c4.getdata();
    return 0;
};