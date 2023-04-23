//Write a C program print total number of days in a month using switch case.
#include <stdio.h>
int main(){
    int n;
    printf("Enter month number: ");
    scanf("%d",&n);
    
    printf("Number of days: ");
    switch(n){
        case 1:
           printf("31");
           break;
        case 2:
           printf("28 or 29");
           break;
         case 3:
           printf("31");
           break;
         case 4:
           printf("30");
           break;
         case 5:
           printf("31");
           break;
         case 6:
           printf("30");
           break;
         case 7:
           printf("31");
           break;
         case 8:
           printf("31");
           break;
         case 9:
           printf("30");
           break;
         case 10:
           printf("31");
           break;
         case 11:
           printf("30");
           break;
         case 12:
           printf("31");
           break;
         default:
           printf("month doesn't exist");
            
    }
    return 0;
}