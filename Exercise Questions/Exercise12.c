#include <stdio.h>
int main(){
    int n,year;
    char name[12][10]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    
    printf("Enter year:");
    scanf("%d",&year);
    printf("Enter month number: ");
    scanf("%d",&n);

    if (year%4==0 && (year%400==0 || year%100!=0)){
        days[1]+=1;
    }

    if (n>0 && n<13){
        printf("There are %d days in %s %d.",days[n-1],name[n-1],year);
    }

    else {
        printf("Please enter a correct number.");
    }
    return 0;
}