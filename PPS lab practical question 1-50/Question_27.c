//WAP in C by using function to check a given number is prime or not
#include <stdio.h>

int prime(int n){
    int count=0;
    for (int i=2; i<n; i++){
        if (n%i==0){
            count++;
        }
    }
    int k=(count)?0:1;
    return k;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    printf("%d is%s a prime number.",n,prime(n)? "":" not");
    return 0;
}