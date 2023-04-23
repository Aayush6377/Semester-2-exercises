//Write a C program to find sum of first and last digit of a number using do while loop
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int last=n%10,first;
    do{
        first=n%10;
        n/=10;
    }while(n);
    
    printf("Sum of first and last digit= %d",first+last);
    return 0;
}