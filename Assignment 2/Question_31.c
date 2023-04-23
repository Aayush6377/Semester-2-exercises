//Write a C program to print Fibonacci series up to n terms.
#include <stdio.h>
int main(){
    int n;
    printf("Enter a limit: ");
    scanf("%d",&n);
    
    unsigned long long int a=0,b=1,c;
    for(int i=0; i<n; i++){
        printf("%lld\n",a);
        c=a;
        a=b;
        b+=c;
    }
    return 0;
}