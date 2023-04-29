/*WAP in C to print pattern pyramid like:
       *
     ***
   *****
  *******
*********
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter no. of rows: ");
    scanf("%d",&n);
    
    int m=2*n-1;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            if (j>=n-i+1 && j<=n+i-1){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}