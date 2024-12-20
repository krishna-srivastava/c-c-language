#include<iostream>
#include<string>
#include<stdlib.h>
#include<ctime>
using namespace std;

string getpassword(int length){
    string password="";
    string character="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890@#";
    int charsize=character.size();
    srand(time(0));
    int randomindex;
    for(int i=0; i<length; i++){
        randomindex=rand() % charsize;
        password += character[randomindex];
    }
    return password;
}

int main(){
    int length;
    cout<<"\n************************************************************************\n";
    cout<<"enter the lenght of your password:: ";
    cin>>length;

    string password=getpassword(length);

    cout<<"here is your generated password:: "<<password<<endl;

    return 0;
};