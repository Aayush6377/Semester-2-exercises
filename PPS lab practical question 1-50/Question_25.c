//WAP in C to print the upper and lower triangle of a given matrix
#include <stdio.h>
int main(){
    int r,c;
    printf("Enter no. of rows and col: ");
    scanf("%d %d",&r,&c);
    
    printf("\nInput matrix:\n");
    float m[r][c];
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf("%f",&m[i][j]);
        }
    }
    
    int y=(r-c<=0)? 0: r-c;
    printf("\nLower triangle:\n");
    for (int k=y; k<r; k++){
        for (int l=0; l<=k-y; l++){
            printf("%g ",m[k][l]);
        }
        printf("\n");
    }
    
    int z=(r-c<=0)?c-r:0;
    printf("\nUpper triangle:\n");
    for (int i=0;i<r;i++){
        for (int k=-z; k<i; k++) printf("  ");
        for (int j=z+i; j<c; j++) printf("%g ",m[i][j]);
        printf("\n");
    }
    return 0;
}