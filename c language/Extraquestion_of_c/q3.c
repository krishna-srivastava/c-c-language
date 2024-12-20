//wap to find char is vovel or constant..............................................
#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    if(isalpha(ch)){
        char lowerch=tolower(ch);
        if(lowerch=='a'||lowerch=='e'||lowerch=='i'||lowerch=='o'||lowerch=='u'){
            printf("vowel");
        }else{
            printf("constant");
        }
    }
    return 0;
};