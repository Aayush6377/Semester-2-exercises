//WAP in C to find the even and odd numbers from a given FILE
#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    printf("Enter the file name: ");
    gets(a);
    strcat(a,".txt");
    
    FILE* f=fopen(a,"r");
    if (f==NULL){
        printf("File %s doesn't exist.",a);
    }
    else{
        int a;
        fscanf(f,"%d",&a);
        printf("Even: ");
        while (!feof(f)){
            if (a%2==0){
                printf("%d ",a);
            }
            fscanf(f,"%d",&a);
        }
        fseek(f,0,SEEK_SET);
        
        printf("\nOdd: ");
        fscanf(f,"%d",&a);
        while (!feof(f)){
            if (a%2!=0){
                printf("%d ",a);
            }
            fscanf(f,"%d",&a);
        }
        
        fclose(f);
    }
    return 0; 
}