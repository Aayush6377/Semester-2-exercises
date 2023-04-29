//WAP in C to convert binary to decimal
#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    char bin[150];
    printf("Enter a binary form: ");
    gets(bin);
    int p=0,num=0,i;
    for (i=strlen(bin)-1; i>=0; i--){
        if (bin[i]=='0' || bin[i]=='1'){
            num+=pow(2,p++)* (((int) bin[i])-48);
        }
        else {
            break;
        }
    }
    if (i==-1){
        printf("Decimal form: %d",num);
    }
    else{
        printf("Please enter a correct form");
    }
    return 0;
}