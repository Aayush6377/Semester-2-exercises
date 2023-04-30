//WAP in C to apply binary search using recursive
#include <stdio.h>
int binary(float arr[],int ele,int l,int h){
    int mid=l+(h-l)/2;
    if (l>h){
        return -1;
    }
    if (arr[mid]==ele){
        return mid+1;
    }
    else if (arr[mid]<ele){
        return binary(arr,ele,mid+1,h);
    }
    else{
        return binary(arr,ele,l,mid-1);
    }
}
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    float a[n];
    printf("Enter the sorted array: ");
    for  (int i=0; i<n;i++){
        scanf("%f",&a[i]);
    }
    
    float ele;
    printf("Enter the searching element: ");
    scanf("%f",&ele);
    
    int result=binary(a,ele,0,n-1);
    printf("Position of %g: ",ele);
    if (result==-1){
        printf("Not found");
    }
    else printf("%d",result);
    return 0;
}