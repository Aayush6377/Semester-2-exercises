//Write a C program to count number of digits in a number using do while loop.
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int count=0;
    do{
        n/=10;
        count++;
    }while (n);
    printf("Number of digits: %d",count);
    return 0;
}