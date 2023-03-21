#include <stdio.h>
int main(){
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if ((a>=65 && a<=90) || (a>=97 && a<=122)){
        printf("%c is a alphabet.",a);
    }
    else {
        printf("%c is not a alphabet.",a);
    }
    return 0;
}