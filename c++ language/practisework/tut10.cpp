// overloading function in constructor
#include<iostream>
using namespace std;

class bankdeposit{
    int principal;
    int years;
    int intrestRate;
    int returnValue;

    public:
    bankdeposit(){}
    bankdeposit(int p,int y,float r);
    bankdeposit(int p,int y,int r);
    void show();
};
bankdeposit::bankdeposit(int p,int y,float r){
    principal=p;
    years=y;
    intrestRate=r;
    returnValue=principal;
    for(int i=0; i<y; i++){
        returnValue = returnValue * (1+intrestRate);
    }
}
bankdeposit::bankdeposit(int p,int y,int r){
    principal=p;
    years=y;
    intrestRate=float(r)/100;
    returnValue=principal;
    for(int i=0; i<y; i++){
        returnValue = returnValue * (1+intrestRate);
    }
}
void bankdeposit::show(){
    cout<<endl<<"Principal amount was "<<principal<<" .Return value after "<<years<<" years is "<<returnValue<<endl;
}

int main(){
    bankdeposit bd1,bd2;

    int p,y,R;
    float r;

    cout<<".............enter the value of principal, years and interestRate................."<<endl;
    cin>>p>>y>>r;
    bd1=bankdeposit(p,y,r);
    bd1.show();
    
    cout<<".............enter the value of principal, years and interestRate................."<<endl;
    cin>>p>>y>>R;
    bd2=bankdeposit(p,y,R);
    bd2.show();
    return 0;
};