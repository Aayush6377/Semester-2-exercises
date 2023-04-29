//WAP in C to print all prime numbers between a range
#include <stdio.h>
int main(){
    int l,h;
    printf("Enter lower limit: ");
    scanf("%d",&l);
    printf("Enter higher limit: ");
    scanf("%d",&h);
    
    for (int i=l; i<=h && i>0; i++){
        int c=0;
        for (int j=i-1; j>1; j--){
            if (i%j==0){
                c++;
            }
        }
        if (c==0){
            printf("%d\n",i);
        }
    }
    return 0;
}