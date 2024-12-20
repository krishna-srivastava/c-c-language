// wap to check a string is palindrome or not............................................
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int length,i;
    int ispalidrome=1;//assuming

    printf("enter a word: ");
    scanf("%s",&str);

    length=strlen(str);

    for(i=0; i<length; i++){
        if(str[i] != str[length-i-1]){
            ispalidrome=0;
            break;
        }
    }

    if(ispalidrome){
        printf("the string is palindrome");
    }else{
        printf("the string is not palindrome");
    }
    return 0;
};