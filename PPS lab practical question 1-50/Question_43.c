//WAP in C to implement selection sort
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    float a[n];
    printf("Enter the array: ");
    for (int i=0; i<n; i++){
        scanf("%f",&a[i]);
    }
    
    for (int i=0; i<n-1;i++){
        int t=i;
        for (int j=i+1; j<n;j++){
            if (a[t]>a[j]){
                t=j;
            }
        }
        if (t!=i){
            float temp=a[i];
            a[i]=a[t];
            a[t]=temp;
        }
    }
    
    printf("Sorted array: ");
    for (int k=0; k<n;k++){
       printf("%g ",a[k]);
     }
    return 0;
}