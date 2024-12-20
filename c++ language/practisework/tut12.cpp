//destructor.....................................................................
#include<iostream>
using namespace std;

int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"this is the time when constructor is called for object number "<<count<<endl;
    }
    ~num(){
    cout<<"this is the time destructor is called for object number "<<count<<endl;
    count--;
    }
};
int main(){
    cout<<"welcome to los vegas"<<endl;
    cout<<"creating two more objects"<<endl;
    num n1;
    {
        cout<<"entering"<<endl;
        num n2,n3;
        cout<<"existing"<<endl;
    }
    cout<<"back to main"<<endl;
    return 0;
};