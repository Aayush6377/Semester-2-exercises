/* WAP in C to print pattern pyramid like:
       1
      1 1
    1 2 1
  1 3 3 1
1 4 6 4 1 */
#include <stdio.h>
#include <math.h>
unsigned long long int com(int n,int r){
    return (tgamma(n+1)/(tgamma(n-r+1)*tgamma(r+1)));
}
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        for (int j=n-i-1; j>0; j--) printf(" ");
        for (int k=0; k<=i; k++) printf("%lld ",com(i,k));
        printf("\n");
    }
    
    return 0;
}