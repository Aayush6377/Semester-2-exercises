//Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle. 
#include <stdio.h>
int main(){
    float s1,s2,s3;
    printf("Enter the sides of triangle:-\n");
    scanf("%f %f %f",&s1,&s2,&s3);
    if ((s1==s2) && (s2==s3) && (s3==s1)){
        printf("It is an equilateral triangle.");
    }
    else if ((s1==s2) || (s2==s3) || (s3==s1)){
        printf("It is an isosceles triangle.");
    }
    else {
        printf("It is a scalene triangle.");
    }
    
    return 0;
}