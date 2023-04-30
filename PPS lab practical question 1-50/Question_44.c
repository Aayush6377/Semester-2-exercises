//WAP in C to implement insertion sort
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    
    float a[n];
    printf("Enter an array: ");
    for (int i=0; i<n; i++){
        scanf("%f",&a[i]);
    }
    
    for (int k=1; k<n; k++){
        float temp=a[k];
        int j=k-1;
        for (;a[j]>temp;j--){
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
    
    printf("Sorted array: ");
    for (int l=0; l<n;l++){
        printf("%g ",a[l]);
    }
    return 0;  
}
