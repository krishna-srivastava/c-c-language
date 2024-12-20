/*
pattern9:
         *
        ***
       *****
      *******
     *********
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
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
    return 0;
};