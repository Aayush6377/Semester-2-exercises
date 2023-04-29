//WAP in C to check a given number is palindrome or not.
#include <stdio.h>
#include <math.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int b=0,c=a,count=0;
    while (c){
        c/=10;
        count++;
    }
    c=a;
    for (int i=count-1; i>=0; i--){
        b+=(a%10)*pow(10,i);
        a/=10;
    }
    if (c==b){
        printf("%d is a palindrome",c);
    }
    else {
        printf("%d is not a palindrome",c);
    }
    return 0;
}