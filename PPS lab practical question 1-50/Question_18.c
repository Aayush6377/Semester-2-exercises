//WAP in C to swap two numbers by various methods
#include <stdio.h>
int main(){
    int a=6,b=8;
    printf("Before swapping: a=%d b=%d\n",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("After swapping: a=%d b=%d\n",a,b);
    int c=12,d=67;
    printf("Before swapping: c=%d d=%d\n",c,d);
    c=c^d;
    d=c^d;
    c=c^d;
    printf("After swapping: c=%d d=%d",c,d);
    return 0;
}