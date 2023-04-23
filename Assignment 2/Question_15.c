//Write a C program to check whether a number is positive, negative or zero using switch case. 
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    printf("%d is ",n);
    int i=(n==0)? 0:(n>0)?1:-1;
    switch(i){
        case 1:
           printf("positive.");
           break;
        case -1:
           printf("negative.");
           break;
        case 0:
           printf("zero.");
           break;
    }
    return 0;
}