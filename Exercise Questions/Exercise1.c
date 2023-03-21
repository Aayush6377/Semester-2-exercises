//Write a C program to find maximum between two numbers
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    if (a>b) {
        printf("Maximun: %d",a);
    }
    else if(a<b){
        printf("Maximum: %d",b);
    }
    else {
        printf("%d and %d both are equal");
    }
    return 0;
}