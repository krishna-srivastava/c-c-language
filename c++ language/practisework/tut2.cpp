//array of objects............................................
#include<iostream>
using namespace std;

class employee{
    int id;
    public:
    void setdata(void){
        cout<<"enter you id: "<<endl;
        cin>>id;
    }
    void getdata(void){
        cout<<"this is you id: "<<id<<endl;
    }
};

int main(){
    employee oyo[5];
    for(int i=0;i<5;i++){
        oyo[i].setdata();
        oyo[i].getdata();
    }
    return 0;
};