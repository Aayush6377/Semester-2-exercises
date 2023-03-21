//Write a C program to input week number and print week days
#include <stdio.h>
int main(){
    char a[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int n;
    printf("Enter day number: ");
    scanf("%d",&n);
    if (n<=7 && n>0){
        printf("%d day of week: %s",n,*(a+n-1));
    }
    else{
        printf("Are you a fool?");
    }
    return 0;
}