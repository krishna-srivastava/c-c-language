//file I/O............................................................................
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    //writting operation.........................
    ofstream out;
    out.open("tut21.txt");
    string str1="this is krishna";
    out<<"hello world"<<endl;
    out<<"hello me"<<endl;
    out<<"hello you"<<endl;
    out<<"hello"<<endl;
    out<<str1<<endl;
    out.close();

    //reading operation..........................
    ifstream in;
    in.open("tut21.txt");
    string str2;
    while(in.eof()==0){
        getline(in,str2);
        cout<<str2<<endl;
    }
    in.close();
    return 0;
};