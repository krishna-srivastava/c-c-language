/*
pattern15:
    A
    BC
    DEF
    GHIJ
    KLMNO
*/
#include<iostream>
using namespace std;

int main(){
    char x='A';
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<x++;
        }
        cout<<endl;
    }
    return 0;
};