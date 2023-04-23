//Write a C program to input week number and print week day
#include <stdio.h>
int main(){
    char name[7][10]={"Monday","Tuesday","Wednesdat","Thursday","Friday","Saturday","Sunday"};
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    if (num>=1 && num<=7){
        printf("%d day of week: %s",num,name[num-1]);
    }
    else {
        printf("%d day doesn't exist");
    }
    return 0;
}