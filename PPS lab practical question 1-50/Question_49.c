//WAP in C to apply concept of pointers
#include <stdio.h>

int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int factorial(int *n){
    for (int i=*n-1;i>=1;i--){
        *n*=i;
    }
}

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before swap: a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("After swap: a=%d b=%d\n",a,b);
    
    int f;
    printf("Enter a number: ");
    scanf("%d",&f);
    printf("%d!= ",f);
    factorial(&f);
    printf("%d",f);
    return 0;
}