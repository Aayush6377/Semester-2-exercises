//Write a C program to calculate profit or loss. 
#include <stdio.h>
int main(){
    float cp,sp;
    printf("Enter Cost price: ");
    scanf("%f",&cp);
    printf("Enter Selling price: ");
    scanf("%f",&sp);
    
    float per=((sp-cp)/cp)*100;
    if (per>0){
        printf("Profit: %.2f%%",per);
    }
    else if(per<0){
        printf("Loss: %.2f%%",-per);
    }
    else {
        printf("Neither profit nor loss");
    }
    return 0;
}