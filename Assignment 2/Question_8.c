//Write a C program to input month number and print number of days in that month. 
#include <stdio.h>
int main(){
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int n;
    printf("Enter month number:");
    scanf("%d",&n);
    
    if (n>=1 && n<=12){
        if (n==2){
            printf("Number of days:28 or 29");
        }
        else {
            printf("Number of days:%d",days[n-1]);
        }
    }
    else {
        printf("%d month doesn't exist.",n);
    }
    return 0;
}