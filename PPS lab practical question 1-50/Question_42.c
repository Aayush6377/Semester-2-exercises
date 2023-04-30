//WAP in C to implement bubble sort
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    float a[n];
    printf("Enter the array: ");
    for  (int i=0; i<n;i++){
        scanf("%f",&a[i]);
    }
   
   for (int j=0; j<n-1; j++){
       for (int k=0; k<n-j-1; k++){
           if (a[k]>a[k+1]){
               float temp=a[k];
               a[k]=a[k+1];
               a[k+1]=temp;
           }
       }
   }
   
   printf("Sorted array: ");
   for (int l=0; l<n; l++){
       printf("%g ",a[l]);
   }
    return 0;
}