//Write a C program to check whether a number is divisible by 5 and 11 or not
#include <stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a%5==0 && a%11==0){
        printf("%d is divisible by 5 and 11.",a);
    }
    else if (a%5==0){
        printf("%d is divisible by 5 but not 11.",a);
    }
    else if (a%11==0){
        printf("%d is divisible by 11 but not 5.",a);
    }
    else {
        printf("%d is neither divisible 5 nor 11",a);
    }
    return 0;
}
