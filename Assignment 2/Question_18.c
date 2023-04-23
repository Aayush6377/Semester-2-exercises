//Write a C program to print all natural numbers in reverse (from n to 1). - using while loop
#include <stdio.h>
int main(){
    int n;
    printf("Enter initial number: ");
    scanf("%d",&n);
    
    int i=n;
    while (i>=1){
        printf("%d\n",i--);
    }
    return 0;
}