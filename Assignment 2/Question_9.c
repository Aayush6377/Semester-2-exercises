//Write a C program to count total number of notes in given amount. 
#include <stdio.h>
int main(){
    int note[]={2000,500,200,100,50,20,10,5,2,1};
    int no[10]={0,0,0,0,0,0,0,0,0,0};
    int amount;
    printf("Enter amount: ");
    scanf("%d",&amount);
    
    int i=0;
    while (amount>0){
        while (amount>=note[i]){
            amount-=note[i];
            no[i]++;
        }
        i++;
    }
    
    for (int j=0; j<10; j++){
        if (no[j]!=0){
            printf("%d ₹%d%s",no[j],note[j],((j==9)? "": ";"));
        }
    }
    printf(" note(s) required.");
    return 0;
}