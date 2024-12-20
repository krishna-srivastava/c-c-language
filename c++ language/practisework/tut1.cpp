//classes.
#include<iostream>
using namespace std;

class humans{
    private: int speed,bodyweight;
    public: int age,bodycount;
    void setdata(int a,int b);
    void getdata(void);
};
void humans::setdata(int a,int b){
    speed=a;
    bodyweight=b;
}
void humans::getdata(void){
    cout<<speed<<endl;
    cout<<bodyweight<<endl;
    cout<<age<<endl;
    cout<<bodycount<<endl;
}

int main(){
    humans krishna;
    krishna.age=18;
    krishna.bodycount=0;
    krishna.setdata(20,57);
    krishna.getdata();
    return 0;
};