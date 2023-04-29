//WAP in C to find the factorial of given number
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    unsigned long long int f=1;
    for (int i=n; i>=1; i--){
        f*=i;
    }
    printf("%d! = %lld",n,f);
    return 0;
}