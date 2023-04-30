//WAP in C to implement dynamic memory allocations
#include <stdio.h>
#include <stdlib.h>
typedef struct u{
    float a;
    struct u* b;} type;
    
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    
    printf("Enter the list: ");
    type* head=(type *) malloc(sizeof(type *));
    scanf("%f",&head->a);
    
    type* node=(type *) malloc(sizeof(type *));
    head->b=node;
    scanf("%f",&node->a);
    
    for (int i=0; i<n-2; i++){
        type* node_n=(type *) malloc(sizeof(type *));
        node->b=node_n;
        scanf("%f",&node_n->a);
        node=node_n;
    }
    
    printf("Linked list form:\n");
    printf("head: %g-> ",head->a);
    
    type* poi=head->b;
    int i=2;
    while((poi->b)!=NULL){
        printf("Node %d: %g-> ",i++,poi->a);
        poi=poi->b;
    }
    printf("Node %d: %g.",i,poi->a);
    
    type* ptr1=head;
    type* ptr2=head->b;
    while (ptr2!=NULL){
        free(ptr1);
        ptr1=ptr2;
        ptr2=ptr2->b;
    }
    free(ptr1);
    return 0;
}