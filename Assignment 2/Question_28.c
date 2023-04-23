//Write a C program to find power of a number using for loop.
#include <stdio.h>
int main(){
    int n,p;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter power: ");
    scanf("%d",&p);
    
    long long int r=1;
    for (int i=0; i<p; i++){
        r*=n;
    }
    printf("%d^%d = %lld",n,p,r);
    return 0;
}