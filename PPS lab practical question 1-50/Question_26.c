//WAP in C by using function to find the factorial of given number
#include <stdio.h>
int factorial(int n){
    int a=1;
    for (int i=n;i>1;i--){
        a*=i;
    }
    return a;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    printf("%d!= %d",n,factorial(n));
    return 0;
}