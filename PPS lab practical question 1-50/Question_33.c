//WAP in C to find two maximum and two minimum of an array
#include <stdio.h>
int main(){
    int n;
    printf("Enter no. of elements of an array: ");
    scanf("%d",&n);
    float arr[n];
    printf("Enter the array:");
    for (int i=0; i<n; i++){
        scanf("%f",&arr[i]);
    }
    
    float min1=arr[0],max1=arr[0];
    float min2=arr[0],max2=arr[0];
    for (int j=0; j<n; j++){
        if (min1>=arr[j]){
            min1=arr[j];
        }
        if (max1<=arr[j]){
            max1=arr[j];
        }
    }
    if (min1==min2) min2=arr[1];
    if (max1==max2) max2=arr[1];
    for (int k=0; k<n; k++){
        if (min2>=arr[k] && arr[k]!=min1){
            min2=arr[k];
        }
        if (max2<=arr[k] && arr[k]!=max1){
            max2=arr[k];
        }
    }
    
    printf("Minimum elements: %g %g\n",min1,min2);
    printf("Maximum elements: %g %g",max1,max2);
    return 0;
}