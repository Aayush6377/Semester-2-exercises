//Write a C program to check whether a year is leap year or not. 
#include <stdio.h>
int main(){
    int n;
    printf("Enter a year: ");
    scanf("%d",&n);
    
    if ((n%4==0)&& (n%100!=0 || n%400==0)){
        printf("%d is a leap year",n);
    }
    else {
        printf("%d is not a leap year",n);
    }
    return 0;
}