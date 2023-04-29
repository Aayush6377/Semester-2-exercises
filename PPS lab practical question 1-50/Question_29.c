/*WAP in C by using function to print pattern pyramid like:
*********
 *******
   *****
    ***
      *
*/
#include <stdio.h>
int pattern(int r){
    for (int i=0; i<r; i++){
        for (int j=0; j<i; j++) printf(" ");
        for (int k=r; k>i; k--) printf("*");
        for (int l=r-1; l>i; l--) printf("*");
        printf("\n");
    }
}

int main(){
    int n;
    printf("Enter no. of rows: ");
    scanf("%d",&n);
    pattern(n);
    return 0;
}