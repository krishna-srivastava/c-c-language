//inheritence syntax.................................................................
#include<iostream>
using namespace std;

//base class
class employee{
    public:
    int id; 
    float salary;
    employee(){}
    employee(int inpid){
        id=inpid;
        salary=69.0;
    }
};

//derived class
class programmer:public employee{
    public:
    int Planguage=5;
    programmer(int inpid){
        id=inpid;
    }
    void getdata(){
        cout<<id;
    }
};
int main(){
    employee krishna(69),harry(96);
    cout<<krishna.salary<<endl;
    cout<<harry.salary<<endl;

    programmer python(11);
    cout<<python.Planguage<<endl;
    cout<<python.id<<endl;
    python.getdata();
    return 0;
};