/*
pattern7:
        *
       * *
      * * *
     * * * *
    * * * * *
*/
#include <iostream>
using namespace std;

int main()
{
    int row = 5;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= (row - i); j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
};