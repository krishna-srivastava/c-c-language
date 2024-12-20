// wap to check how many number are even or oddd.......................................
#include<stdio.h>

int main(){
    int num,evencount=0,oddcount=0,n;
    printf("enter number of element: ");
    scanf("%d",&num);
    for(int i=0; i<num; i++){
        printf("enter a number: ");
        scanf("%d",&n);

        if(n%2==0){
            evencount++;
        }else{
            oddcount++;
        }
    }
    printf("total even number is %d\n",evencount);
    printf("total odd number is %d\n",oddcount);
    return 0;
};