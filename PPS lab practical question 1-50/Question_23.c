//WAP in C to transpose a matrix
#include <stdio.h>
int main(){
    int r,c;
    printf("Enter no. of rows and columns of metrix: ");
    scanf("%d %d",&r,&c);
    float a[r][c];
    
    printf("Input Matrix: \n");
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf("%f",&a[i][j]);
        }
    }
    
    printf("\nTranspose: \n");
    for (int k=0; k<c; k++){
        for (int l=0; l<r; l++){
            printf("%g ",a[l][k]);
        }
        printf("\n");
    }
    return 0;
}