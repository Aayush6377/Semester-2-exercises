//WAP in C by using function to print all prime numbers between a range
#include <stdio.h>
int prime(int n){
    int count=0;
    for (int i=2; i<n;i++){
        if (n%i==0){
           count++; 
        }
    }
    int k=(count)?0:1;
    return k;
}

int main(){
    int l,h;
    printf("Enter lower limit: ");
    scanf("%d",&l);
    printf("Enter higher limit: ");
    scanf("%d",&h);
    for (int j=l; j<=h; j++){
        if (prime(j)){
            printf("%d\n",j);
        }
    }
}