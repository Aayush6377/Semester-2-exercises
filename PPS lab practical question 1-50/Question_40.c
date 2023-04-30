//WAP in C to apply binary search using iterative
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    
    float a[n];
    printf("Enter the sorted array: ");
    for (int i=0; i<n;i++){
        scanf("%f",&a[i]);
    }
    
    float ele;
    printf("Enter the searching element: ");
    scanf("%f",&ele);
    
    printf("Position of %g: ",ele);
    int l=0,h=n-1;
    while(1){
        int mid=(l+h)/2;
        if (l>h){
            printf("Not found");
            break;
        }
        if (a[mid]==ele){
            printf("%d",mid+1);
            break;
        }
        else if(a[mid]<ele){
            l=mid+1;
        }
        else if(a[mid]>ele){
            h=mid-1;
        }
    }
    return 0;
}