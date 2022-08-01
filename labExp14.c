/***********************************************************
 * File             : labExp14.c
 * Description      : C Program to read details of employees
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 11/10/2021
 * *******************************************************/
#include<stdio.h>
struct employee{
    char name[50];
    int empid;
    int salary;
};
int main(){
    int c;struct employee d[50];
    printf("number of employees:");
    scanf("%d",&c);
    for(int i=1;i<=c;i++){
        printf("\nenter details of employee %d:",i);
        getchar();
        printf("\nenter name:");
        scanf("%[^\n]",d[i].name);
        printf("enter id:");
        scanf("%d",&d[i].empid);
        printf("enter salary:");
        scanf("%d",&d[i].salary);
        printf("\n______________________________");  }
    for(int i=1;i<=c;i++)
    {
        printf("\nDETAILS OF EMPLOYEE %d:",i);
        printf("\nNAME:%s",d[i].name);
        printf("\nEMPID:%d",d[i].empid);
        printf("\nSALARY:%d",d[i].salary);
        printf("\n______________________________");
    }
    return 0;

}

