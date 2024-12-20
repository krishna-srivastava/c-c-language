/*
pattern8:
    * * * * * 
     * * * *
      * * *
       * *
        *
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = n; i >= 1; i--)
    {
        for (int j = n - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = i; k > 0; k--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
};