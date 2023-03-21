//Write a C program to whether a character is uppercase or lowercase alphabet
#include <stdio.h>
int main(){
    char a;
    printf("Enter a character:");
    scanf("%c",&a);

    if (a>=65 && a<=90){
        printf("%c is upper case",a);
    }
    else if (a>=97 && a<=122){
        printf("%c is lower case",a);
    }
    else {
        printf("%c is not a alphabet",a);
    }

    return 0;
}