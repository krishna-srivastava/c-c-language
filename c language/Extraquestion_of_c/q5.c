//wap to sum a two array .......................................
#include<stdio.h>

int main(){
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);

    int arr1[n],arr2[n],sum[n];

    printf("enter the first element:\n");
    for(int i=0; i<n; i++){
        printf("enter element %d: ",i+1);
        scanf("%d",&arr1[i]);
    }  

    printf("enter the second element:\n");
    for(int i=0; i<n; i++){
        printf("enter element %d: ",i+1);
        scanf("%d",&arr2[i]);
    }    
    
    for(int i=0; i<n; i++){
        sum[i]=arr1[i]+arr2[i];
    }

    printf("the sum of two array is:\n");
    for(int i=0; i<n; i++){
        printf("%d ",sum[i]);
    }
    return 0;
};