/*WAP in C to print pattern pyramid like:
*********
 *******
   *****
    ***
      *
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    
    for (int i=n; i>=1; i--){
        int m=2*i-1;
        for (int j=n; j>i; j--) printf(" ");
        for (int k=0; k<m; k++) printf("*");
        printf("\n");
    }
    return 0;
}