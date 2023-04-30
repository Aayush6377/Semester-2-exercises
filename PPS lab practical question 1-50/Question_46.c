//WAP in C to copy the content of one FILE into another FILE
#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    printf("Enter the file name: ");
    gets(a);
    strcat(a,".txt");
    FILE *f1=fopen(a,"r");
    if (f1==NULL){
       printf("File %s doesn't exist.",a) ;
    }
    else{
        char b[100];
        printf("Name the destination file: ");
        gets(b);
        strcat(b,".txt");
        
        FILE* f2=fopen(b,"w");
        char c=fgetc(f1);
        while (!feof(f1)){
            fprintf(f2,"%c",c);
            c=fgetc(f1);
        }
        printf("File %s successfully created.",b);
        fclose(f2);
        fclose(f1);
    }
    return 0;
}