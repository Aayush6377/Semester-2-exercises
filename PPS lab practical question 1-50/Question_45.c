//WAP in C to create a FILE
#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    printf("Give a name for a file: ");
    gets(a);
    
    strcat(a,".txt");
    FILE * f=fopen(a,"w");
    if (f==NULL){
        printf("There is a problem in creating a file.");
    }
    else{
        printf("File %s successfully created.",a);
    }
    fclose(f);
    return 0;
}