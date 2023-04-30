//WAP in C to count the no. of characters and no. of words of a string without using library functions
#include <stdio.h>

int main(){
    char arr[200];
    printf("Enter a string: ");
    gets(arr);
    int chr=0,word=1;
    for (int i=0; arr[i]; i++){
        chr++;
        if (arr[i]==' ' && arr[i+1]!=' '){
            word++;
        }
    }
    printf("Number of characters: %d\n",chr);
    printf("Number of words: %d",word);
    return 0;
}
