//WAP in C to find area and perimeter of a circle
#include <stdio.h>
#include <math.h>
int main(){
    double r;
    printf("Enter radius: ");
    scanf("%lf",&r);
    printf("Perimeter: %lf\n",2*M_PI*r);
    printf("Area: %lf",M_PI*r*r);
    return 0;
}