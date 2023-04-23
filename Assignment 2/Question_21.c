//Write a C program to find sum of all natural numbers between 1 to n. using for loop.
#include <stdio.h>
int main(){
    int n;
    printf("Enter limit: ");
    scanf("%d",&n);
    int sum=0;
    for (int i=1; i<=n; i++){
        sum+=i;
    }
    printf("Sum of %d natural number: %d",n,sum);
    return 0;
}