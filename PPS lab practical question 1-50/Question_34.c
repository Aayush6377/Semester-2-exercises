//WAP in C for string library functions
#include <stdio.h>
#include <string.h>

int main(){
    char str[200],str2[200];
    printf("Enter 1st string: ");
    gets(str);
    printf("Enter 2nd string: ");
    gets(str2);
    
    if (!strcmp(str,str2)){
        printf("Both strings are same\n");
    }
    else{
        printf("Strings are not same\n");
    }
    strcat(str,str2);
    printf("Strcat= %s\n",str);
    strcpy(str2,str);
    printf("Strcpy= %s\n",str2);
    printf("Strlen= %d\n",strlen(str));
    char str3[100];
    strncpy(str3,str,5);
    str3[5]='\0';
    printf("Strncpy at n=5 is %s\n",str3);
    char str4[100]="Hi ";
    strncat(str4,str,5);
    printf("Strncat at n=5 is %s\n",str4);
    char str5[100];
    printf("Enter a sub string: ");
    gets(str5);
    char *a=strstr(str,str5);
    if (a!=NULL){
        printf("Position of %s in %s is: %d",str5,str,a-str+1);
    }
    else printf("%s not found",str5);
    return 0;
}