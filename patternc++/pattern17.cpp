/*
pattern 17:pascal pattern
        1 
       1 1
      1 2 1
     1 3 3 1
    1 4 6 4 1
*/
#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        int coef=1;
        for(int j=n-i; j>0; j--){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            cout<<coef<<" ";
            coef = coef * (i-k)/k;
        }
        cout<<endl;
    }
    return 0;
};