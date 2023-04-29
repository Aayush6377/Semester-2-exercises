//WAP in C to find the largest number among given three numbers
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    
    if (a>=b && a>=c){
        printf("Largest: %d",a);
    }
    else if (b>=a && b>=c){
        printf("Largest: %d",b);
    }
    else {
        printf("Largest: %d",c);
    }
    return 0;
}