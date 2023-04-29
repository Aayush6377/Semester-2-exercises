//WAP in C to check a given number is prime or not
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int count=0;
    for (int i=n-1; i>1; i--){
        if (n%i==0){
            count++;
        }
    }
    if (count==0){
        printf("%d is prime number",n);
    }
    else{
        printf("%d is not a prime number",n);
    }
    return 0;
}
