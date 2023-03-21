#include <stdio.h>
int main(){
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if ((a>=65 && a<=90) || (a>=97 && a<=122)){
        printf("%c is a alphabet.",a);
    }
    else if (a>=48 && a<=57){
        printf("%c is a digit.",a);
    }
    else {
        printf("%c is a special character.",a);
    }
    return 0;
}