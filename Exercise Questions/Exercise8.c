#include <stdio.h>
int main(){
    char alpha;int count=0;
    printf("Enter a alphabet:");
    scanf("%c",&alpha);
    if ((alpha>=65 && alpha<=90) || (alpha>=97 && alpha<=122)){
        char vowel[]="AaEeIiOoUu";
        for (int i=0; i<10; i++){
            if (vowel[i]==alpha){
                printf("%c is a vowel.",alpha);
                count++;
            }
        }
        if (count==0){
            printf("%c is a consonent.",alpha);
        }
    }
    else {
        printf("%c is not a alphabet.",alpha);
    }
    return 0;
}