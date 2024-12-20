//wap in to reverse a string...................................................
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i,reversed;
    printf("enter a string: ");
    scanf("%s",str);

    int lenght=strlen(str);

    for(i=0; i<lenght/2; i++){
        reversed=str[i];
        str[i]=str[lenght-i-1];
        str[lenght-i-1]=reversed;
    }
    printf("the reversed string is %s",str);
    return 0;
};