/*
pattern4:
    *****
    ****
    ***
    **
    *
*/
#include<iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
};