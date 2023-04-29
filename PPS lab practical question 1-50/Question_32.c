//WAP in C to find LCM and GCD using recursion
#include <stdio.h>
int gcd(int a,int b){
    if (b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}

int main(){
    int n1,n2;
    printf("Enter the two numbers: ");
    scanf("%d %d",&n1,&n2);
    
    int g=gcd(n1,n2);
    int lcm=(n1*n2)/g;
    printf("LCM: %d\nGCD: %d",lcm,g);
    return 0;
}