//Write a C program to check whether a number is palindrome or not using while loop.
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    int m=0,count=0,d=n;
    while (d){
        d/=10;
        count++;
    }
    count--;
    d=n;
    while (d){
        m+=(d%10)*pow(10,count);
        d/=10;
        count--;
    }
    
    if (m==n){
        printf("%d is a palindrome.",n);
    }
    else {
        printf("%d is not a palindrome.",n);
    }
    return 0;
}
