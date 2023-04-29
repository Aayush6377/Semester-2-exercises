//WAP in C to create a simple calculator (+, -, *, /) using switch case
#include <stdio.h>
#include <math.h>
int main(){
    double a,b;
    char c;
    printf("Enter expression: ");
    scanf("%lf %c %lf",&a,&c,&b);
    
    switch(c){
        case '+':
            printf("%g + %g = %g",a,b,a+b);
            break;
        case '-':
            printf("%g - %g = %g",a,b,a-b);
            break;
        case 'x':
            printf("%g x %g = %g",a,b,a*b);
            break;
        case '/':
            printf("%g / %g = %g",a,b,a/b);
            break;
        case '^':
            printf("%g ^ %g = %g",a,b,pow(a,b));
            break;
        case '%':
            printf("%g%% of %g =%g",a,b,(a*b)/100);
            break;
        default:
            printf("%c operation not found",c);
    }
    return 0;
}