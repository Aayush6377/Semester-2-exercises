//Write a C program to print all Armstrong numbers between 1 to n using while loop.
#include <stdio.h>
#include <math.h>
int armstrong(int n){
    int arm=0,count=0,m=n;
    while (m){
        m/=10;
        count++;
    }
    m=n;
    for (int i=0; i<count; i++){
        arm+=pow((m%10),count);
        m/=10;
    }
    if (arm==n){
        return (1);
    }
    else {
        return (0);
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for (int i=1; i<=n; i++){
        if (armstrong(i)){
            printf("%d\n",i);
        }
    }
}