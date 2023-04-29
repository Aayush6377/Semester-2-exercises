//WAP in C to multiply two matrices
#include <stdio.h>
int main(){
    int row[2],col[2];
    for (int o=0; o<2; o++){
        printf("Matrix %d:\n",o+1);
        printf("Enter number of rows: ");
        scanf("%d",&row[o]);
        printf("Enter number of columns: ");
        scanf("%d",&col[o]);
    }
    if (row[1]==col[0]){
        float m1[row[0]][col[0]], m2[row[1]][col[1]],mul[row[0]][col[1]];
        
        printf("\nMatrix 1 input:\n");
        for (int i=0; i<row[0]; i++){
            for (int j=0; j<col[0]; j++){
                scanf("%f",&m1[i][j]);
            }
        }
        printf("\n\nMatrix 2 input:\n");
        for (int k=0; k<row[1]; k++){
            for (int l=0; l<col[1]; l++){
                scanf("%f",&m2[k][l]);
            }
        }
        
        printf("\nMultiplied matrix:\n");
        for (int m=0; m<row[0]; m++){
            for (int n=0; n<col[1]; n++){
                mul[m][n]=0;
                for (int p=0; p<col[0]; p++){
                    mul[m][n]+=m1[m][p]*m2[p][n];
                }
                printf("%g ",mul[m][n]);
            }
            printf("\n");
        }
    }
    else printf("Multiplication not possible.");
    return 0;
}