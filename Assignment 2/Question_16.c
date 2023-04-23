//Write a C program to create Simple Calculator using switch case.
#include <stdio.h>
#include <math.h>
int main(){
    float a,b;
    char o;
    printf("Enter expression: ");
    scanf("%f %c %f",&a,&o,&b);
    printf("%g %c %g = ",a,o,b);
    
    switch(o){
        case '+':
           printf("%g",a+b);
           break;
        case '-':
           printf("%g",a-b);
           break;
        case 'X':
           printf("%g",a*b);
           break;
        case '/':
           printf("%g",a/b);
           break;
        case '%':
           printf("%g",((int)a)%((int)b));
           break;
        case '^':
           printf("%g",pow(a,b));
           break;
    }
    return 0;
}