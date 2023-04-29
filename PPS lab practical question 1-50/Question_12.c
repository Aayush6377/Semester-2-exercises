//WAP in C to print Fibonacci series
#include <stdio.h>
int main(){
    int n;
    printf("Enter a limit: ");
    scanf("%d",&n);
    
    int a=0,b=1,c;
    for (int i=0; i<n; i++){
        printf("%d\n",a);
        c=a;
        a=b;
        b=b+c;
    }
    return 0;
}