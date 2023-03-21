//Write a C program to input a number and perform trignometic operations on them
#include <stdio.h>
#include <math.h>
int main(){
    float n;
    printf("Enter a number:");
    scanf("%f",&n);
    printf("sin(%.2f)=%f\n",n,sin(n));
    printf("cos(%.2f)=%f\n",n,cos(n));
    printf("tan(%.2f)=%f\n",n,tan(n));
    return 0;
}