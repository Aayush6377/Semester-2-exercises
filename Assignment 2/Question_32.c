/*Star pattern programs and Number pattern programs - 
Write a C program to print the given 
star patterns. 

*                  *
* *              * *
* * *          * * *
* * * *      * * * *
1                  1
2 3              2 2
4 5 6          3 3 3
7 8 9 10     4 4 4 4*/

#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    
    for (int i=0; i<n; i++){   //Pattern 1
        for (int j=0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    
    for (int k=0; k<n; k++){  //Pattern 2
        for (int l=n-k; l>1; l--){
            printf("  ");
        }
        for (int m=0; m<=k; m++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    
    int u=1;
    for (int o=0; o<n; o++){  //Pattern 3
        for (int p=0; p<=o; p++){
            printf("%d ",u++);
        }
        printf("\n");
    }
    printf("\n");
    
    for (int q=1; q<=n; q++){  //Pattern 4
        for (int r=0; r<q; r++){
            printf("%d ",q);
        }
        printf("\n");
    }
    return 0;
}
