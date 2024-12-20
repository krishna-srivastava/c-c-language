//wap to check enter character is uppercase/lowercase/digit..................................
#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    if(isupper(ch)){
        printf("the character is uppercase letter");
    }else if(islower(ch)){
        printf("the character is lowercase letter");
    }else{
        printf("the character is special letter");
    }
    return 0;
};