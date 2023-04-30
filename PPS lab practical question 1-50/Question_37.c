//WAP in C to create a student structure and access members
#include <stdio.h>
#include <conio.h>
#include <string.h>
struct student{
    char name[30];
    int age,roll_no;
    char grade,section;
};
int main(){
   int n;
   printf("Enter number of students: ");
   scanf("%d",&n);
   struct student arr[n];
   for (int i=0; i<n;i++){
       printf("Enter %d student name: ",i+1);
       getch();
       gets(arr[i].name);
       printf("Enter %s age: ",arr[i].name);
       scanf("%d",&arr[i].age);
       printf("Enter grade: ");
       getch();
       arr[i].grade=getchar();
       printf("Enter section: ");
       getch();
       scanf("%c",&arr[i].section);
       printf("Enter roll no. :");
       scanf("%d",&arr[i].roll_no);
       printf("\n\n");
   }
   
   for (int j=0; j<n;j++){
       printf("%d   %s   %d  %d  %c  %c\n",j+1,arr[j].name,arr[j].age,arr[j].roll_no,arr[j].section,arr[j].grade);
   }
   return 0;
}