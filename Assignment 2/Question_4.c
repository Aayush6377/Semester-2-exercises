//Write a C program to input any alphabet and check whether it is vowel or consonant. 
#include <stdio.h>
int main(){
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    char vowel[]="AEIOUaeiou";
    
    int count=0;
    if ((a>='A' && a<='Z') || (a>='a' && a<='z')){
        for (int i=0; i<10; i++){
            if (vowel[i]==a){
                printf("%c is a vowel",a);
                count++;
            }
        }
        if (count==0){
            printf("%c is a consonent",a);
        }
    }
    else {
        printf("%c is not an alphabet",a);
    }
    return 0;
}