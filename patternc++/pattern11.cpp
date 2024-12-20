/*
pattern11:
         *
        ***
       *****
      *******
     *********
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
    int n1 = 5;
    for (int i = 1; i <= n1; i++)
    {
        for (int j = i; j <= n1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k < i; k++)
        {
            printf("*");
        }
        for (int l = 1; l <= i; l++)
        {
            printf("*");
        }
        printf("\n");
    }

    int n2 = 5;
    for (int i = 1; i <= n2; i++)
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