/*Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:

Percentage >= 90% : Grade A 
 Percentage >= 80% : Grade B 
 Percentage >= 70% : Grade C 
 Percentage >= 60% : Grade D 
 Percentage >= 40% : Grade E 
Percentage < 40% : Grade F*/
#include <stdio.h>
int main(){
    char subject[6][15]={"Physics","Chemistry","Biology","Mathematics","Computer","Total"};
    char grade[7]="ABCDEF";
    int percentage[6]={90,80,70,60,40,0};
    
    float marks[6];
    int total[6];
    int t_sum=0;float m_sum=0;
    
    for (int i=0; i<5;i++){
        printf("Enter %s total marks: ",subject[i]);
        scanf("%d",&total[i]);
        printf("Enter %s obtained marks: ",subject[i]);
        scanf("%f",&marks[i]);
        m_sum+=marks[i];
        t_sum+=total[i];
    }
    marks[5]=m_sum;
    total[5]=t_sum;
    printf("\n");
    for (int j=0; j<6; j++){
        float per=(marks[j]/total[j])*100;
        int u=0;
        while (per<=percentage[u]){
            u++;
        }
        char g=(per==0)?'F':grade[u];
        printf("%s %.2f%% %c\n",subject[j],per,g);
    }
    
    return 0;
}
