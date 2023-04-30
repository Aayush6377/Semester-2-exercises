//WAP in C to apply linear search
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    float a[n];
    printf("Enter the array: ");
    for (int i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    float ele;
    printf("Enter the seaching element: ");
    scanf("%f",&ele);
   
    int count=0; 
    printf("Position(s) of %g: ",ele);
    for (int j=0; j<n;j++){
        if (a[j]==ele){
            printf("%d ",j+1);
            count++;
        }
    }
    if (count==0) printf("Not found");
    return 0;
}