/*
pattern16:
    * * * * * * * * * * 
    * * * *     * * * *
    * * *         * * *
    * *             * *
    *                 *
    *                 *
    * *             * *
    * * *         * * *
    * * * *     * * * *
    * * * * * * * * * *
*/

#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=5; j>=i; j--){
            printf("* ");
        }
        for(int k=1; k<i; k++){
            printf("  ");
        }
        for(int l=1; l<i; l++){
            printf("  ");
        }
        for(int m=n; m>=i; m--){
            printf("* ");
        }
        cout<<endl;
    }

    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        for(int k=5; k>i; k--){
            printf("  ");
        }
        for(int l=5; l>i; l--){
            printf("  ");
        }
        for(int m=1; m<=i; m++){
            printf("* ");
        }
        cout<<endl;
    }
    return 0;
};