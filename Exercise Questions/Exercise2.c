//Write a C program to find maximum between three numbers
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b && a>=c) {
        printf("Maximun: %d",a);
    }
    else if(b>=a && b>=c){
        printf("Maximum: %d",b);
    }
    else if(c>=a && c>=b){
        printf("Maximum: %d",c);
    }
    return 0;
}