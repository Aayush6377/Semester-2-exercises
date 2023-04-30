//WAP in C to copy a string to another without using library functions
#include <stdio.h>
int main(){
    char a[200];
    printf("Enter a string: ");
    gets(a);
    int i;
    char b[200];
    for (i=0; a[i]; i++){
        b[i]=a[i];
    }
    b[i]='\0';
    printf("Current string: %s\n",a);
    printf("Copied string: %s",b);
    return 0;
}