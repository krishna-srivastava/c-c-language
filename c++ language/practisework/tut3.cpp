//passing objects as function argument.
#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    void setnum(int x,int y){
        a=x;
        b=y;
    }
    void sumcom(complex o1,complex o2){
        a=o1.a + o2.a;
        b=o1.b + o2.b;
    }
    void print(void){
        cout<<"the complex num is "<<a<<" + "<<b<<"i"<<endl;
    }
    void printcom(void){
        cout<<"the sum of complex num is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
    complex c1,c2,c3;
    c1.setnum(2,3);
    c1.print();

    c2.setnum(4,2);
    c2.print();

    c3.sumcom(c1,c2);
    c3.printcom();
    return 0;
};