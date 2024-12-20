//write a program in to check the length of string without the use strlen...................
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int length=0,i=0;
    printf("enter a string: ");
    gets(str);

    while(str[i] != '\0'){
        length++;
        i++;
    }

    printf("the lenght of string is %d",length);
    return 0;
};