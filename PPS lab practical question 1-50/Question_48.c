//WAP in C to count the no. of words, characters and lines in a FILE
#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    printf("Enter the file name: ");
    gets(a);
    strcat(a,".txt");
    
    FILE *f=fopen(a,"r");
    if (f==NULL){
        printf("File %s doesn't exist.",a);
    }
    else{
        int word=2,chr=0,line=1;
        char c=fgetc(f);
        while(!feof(f)){
            if (c!='\n'){
                chr++;
            }
            char d=c;
            c=fgetc(f);
            if (d==' ' && c!=' '){
                word++;
            }
            if (d=='\n'){
                line++;
            }
        }
       
        printf("%s contains %d chracters, %d words and %d lines.",a,chr,word,line);
        fclose(f);
    }
    return 0;
}