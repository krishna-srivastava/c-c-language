//wap to find  largest number in array................................................
#include<stdio.h>

int main(){
    int arr[6]={34,56,3,26,78,99};
    int largest=arr[0];
    for(int i=0; i<6; i++){
        if(largest<arr[i]){
            largest=arr[i];
        }    
    }
    printf("the largest no. in array is %d",largest);
    return 0;
};