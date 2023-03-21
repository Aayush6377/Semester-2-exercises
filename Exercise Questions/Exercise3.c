//Write a C program to check whether a number is negative, positive or zero
#include <stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a>0){
        printf("%d is positive.",a);
    }
    else if(a<0){
        printf("%d is negative.",a);
    }
    else {
        printf("It is zero.");
    }
    return 0;
}