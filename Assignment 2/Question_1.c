//Write a C program to check whether a number is divisible by 5 and 11 or not. 
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    if ((n%5==0) && (n%11==0)){
        printf("%d is divisible by 5 and 11",n);
    }
    else if (n%5==0){
        printf("%d is divisible by 5 only",n);
    }
    else if (n%11==0){
        printf("%d is divisible by 11 only",n);
    }
    else {
        printf("%d is neither divisible by 5 nor 11",n);
    }
    return 0;
}