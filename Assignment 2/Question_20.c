//Write a C program to print all odd number between 1 to 100. Using Do while loop
#include <stdio.h>
int main(){
    int i=1;
    do{
        if (i%2!=0){
            printf("%d\n",i);
        }
        i++;
    }while (i<=100);
    return 0;
}