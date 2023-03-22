//Write a C program to add two numbers
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    c=a+b;
    printf("%d + %d= %d",a,b,c);
    return 0;
}
