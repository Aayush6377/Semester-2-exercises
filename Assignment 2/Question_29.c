//Write a C program to check whether a number is Armstrong number or not using for loop.
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    int arm=0,count=0,m=n;
    while (m){
        m/=10;
        count++;
    }
    m=n;
    for (int i=0; i<count; i++){
        arm+=pow((m%10),count);
        m/=10;
    }
    
    if (arm==n){
        printf("%d is an Armstrong number.",n);
    }
    else {
        printf("%d is not an Armstrong number.",n);
    }
}
