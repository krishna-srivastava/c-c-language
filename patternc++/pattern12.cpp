/*
pattern12:
    *
    **
    * *
    *  *
    *****
*/

#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(j==1 || i==n || i==j){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
};