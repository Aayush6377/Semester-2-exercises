//Write a C program to find area of circle
#include <stdio.h>
#include <math.h>
int main(){
    float r;
    printf("Enter radius: ");
    scanf("%f",&r);
    printf("Area of circle: %.10f",M_PI*r*r);
}
