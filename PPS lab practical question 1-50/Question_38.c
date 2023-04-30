/*WAP in C to create an employee structure and take 50 employees records and print them and find the particular field*/ 
#include <stdio.h>
#include <conio.h>
#define n 50
struct emp{
    char name[30];
    int id;
    struct {int d,m,y;} doj;
    int sal;
};

int main(){
    struct emp record[n];
    for (int i=0; i<n; i++){
        printf("Enter %d employee name: ",i+1);
        getch();
        gets(record[i].name);
        printf("Enter employee ID: ");
        scanf("%d",&record[i].id);
        printf("Enter date of join(dd/mm/yyyy): ");
        scanf("%d/%d/%d",&record[i].doj.d,&record[i].doj.m,&record[i].doj.y);
        printf("Enter annual salary: ");
        scanf("%d",&record[i].sal);
        printf("\n\n");
    }
    
    printf("Id Name    date_of_join   salary\n");
    for (int j=0; j<n; j++){
        printf("%d %s   %d/%d/%d   ₹%d\n",record[j].id,record[j].name,record[j].doj.d,record[j].doj.m,record[j].doj.y,record[j].sal);
    }
    
    printf("\nList of employees:-\n");
    for (int k=0; k<n;k++){
        printf("%s\n",record[k].name);
    }
    return 0;
}
