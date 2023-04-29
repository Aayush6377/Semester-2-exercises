//WAP in C to add two matrices
#include <stdio.h>
int main(){
    int row[2],col[2];
    for (int i=0; i<2; i++){
        printf("Matrix %d:\n",i+1);
        printf("Enter number of rows: ");
        scanf("%d",&row[i]);
        printf("Enter number of columns: ");
        scanf("%d",&col[i]);
    }
    if (row[0]==row[1] && col[0]==col[1]){
        int r=row[0],c=col[0];
        float m[2][r][c];
        
        for (int i=0; i<2; i++){
            printf("Input Matrix %d\n",i);
            for (int j=0; j<r; j++){
                for (int k=0; k<c; k++){
                    scanf("%f",&m[i][j][k]);
                }
            }
        }
        
        printf("Sum:-\n");
        for (int a=0; a<r; a++){
            for (int b=0; b<c; b++){
                printf("%g ",m[0][a][b]+m[1][a][b]);
            }
            printf("\n");
        }
    }
    else printf("Sum not possible.");
    return 0;
}