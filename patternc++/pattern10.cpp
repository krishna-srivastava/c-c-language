/*
pattern10:
    *********
     *******
      *****
       ***
        *
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 5; k > i; k--)
        {
            printf("*");
        }
        for (int l = 5; l >= i; l--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
};