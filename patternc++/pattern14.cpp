/*
pattern14:
    A
    BB
    CCC
    DDDD
    EEEEE
    FFFFFF
    GGGGGGG
    HHHHHHHH
    IIIIIIIII
*/

#include<iostream>
using namespace std;

int main(){
    char x='A';
    for(int i=1; i<=9; i++){
        for(int j=1; j<=i; j++){
            cout<<x;
        }
        x++;
        cout<<endl;
    }
    return 0;
};