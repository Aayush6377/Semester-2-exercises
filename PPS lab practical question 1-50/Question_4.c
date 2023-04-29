//WAP in C to convert Fahrenheit to Celsius and vice-versa
#include <stdio.h>
#include <conio.h>
int main(){
    double t;char unit;
    printf("Enter temperature: ");
    scanf("%lf",&t);
    scanf("%c",&unit);
    getch();
    if (unit=='F' || unit=='f'){
        printf("Temperature in Celsius: %.2lf° C",(t-32)*5/9);
    }
    else if (unit=='c' || unit=='C'){
        printf("Temperature in Fahrenheit: %.2lf° F",(9/5)*t+32);
    }
    else {
        printf("Please enter correct unit");
    }
    return 0;
}