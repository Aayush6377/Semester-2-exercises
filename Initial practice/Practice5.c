//Write a C program to find degree of freedom
#include <stdio.h>
int main(){
    int C,P;
    printf("Enter number of components: ");
    scanf("%d",&C);
    printf("Enter number of Phases: ");
    scanf("%d",&P);
    int F=C-P+2;
    if (F>=0 && F<=3){
        printf("Degree of freedom: %d",F);
    }
    else {
        printf("Your components or Phases information is incorect.");
    }
    return 0;
}