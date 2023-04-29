//WAP in C to find the sum of diagonal elements of a matrix
#include <stdio.h>
int main(){
    int ord;
    printf("Enter order of matrix: ");
    scanf("%d",&ord);
    
    printf("Input %dX%d matrix:\n",ord,ord);
    float m[ord][ord];
    for (int i=0; i<ord; i++){
        for (int j=0; j<ord; j++){
            scanf("%f",&m[i][j]);
        }
    }
    
    float p=0,s=0;
    for (int k=0; k<ord; k++){
        p+=m[k][k];
        s+=m[k][ord-k-1];
    }
    printf("Primary diagonal sum: %g\n",p);
    printf("Secondary diagonal sum: %g\n",s);
    return 0;
}