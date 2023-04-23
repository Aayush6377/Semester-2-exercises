//Write a C program to check whether a character is uppercase or lowercase alphabet. 
#include <stdio.h>
int main(){
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    
    if (a>='A' && a<='Z'){
        printf("%c is upper case.",a);
    }
    else if (a>='a' && a<='z'){
        printf("%c is lower case.",a);
    }
    else {
        printf("%c is not a alphabet.",a);
    }
    return 0;
}