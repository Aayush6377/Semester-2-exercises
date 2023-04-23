/*Write a C program to input any character and check whether it is alphabet, digit or special character.*/
#include <stdio.h>
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    
    if ((c>='A' && c<='Z') || (c>= 'a' && c<='z')){
        printf("%c is a alphabet.",c);
    }
    else if (c>='0' && c<='9'){
        printf("%c is a digit.",c);
    }
    else {
        printf("%c is a special character.",c);
    }
    return 0;
}
