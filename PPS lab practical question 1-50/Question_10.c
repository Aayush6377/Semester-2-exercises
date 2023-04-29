//WAP in C to convert decimal to binary
#include <stdio.h>
#include <string.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    char bin[100];
    int i=0;
    for (; n; i++){
        bin[i]=(char) n%2+48;
        n/=2;
    }
    bin[i]='\0';
    printf("Binary form: ");
    if (i==0){
        printf("0");
    }
    for (int j=strlen(bin)-1; j>=0; j--){
        printf("%c",bin[j]);
    }
    return 0;
}