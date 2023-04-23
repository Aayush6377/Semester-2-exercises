//Write a C program to enter a number and print its reverse using for loop.
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
    
    for (int i=count-1; n; i--){
        m+=(n%10)*pow(10,i);
        n/=10;
    }
    
    printf("Reverse: %d",m);
    return 0;
}