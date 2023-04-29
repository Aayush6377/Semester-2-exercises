/*WAP in C to print pattern pyramid like:
        1
      232
    34543
  4567654
567898765 */
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        for (int j=(n-i); j>=1;j--) printf(" ");
        for (int k=i; k<=2*i-1; k++) printf("%d",k);
        for (int l=2*(i-1); l>=i; l--) printf("%d",l);
        printf("\n");
    }
}