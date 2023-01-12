/************************************************************
 * File             : exp2_7.c
 * Description      : C Program to calculate total percentage of marks
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 02/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){ 
    int rollNo;
    char name[50];
    int subject1,subject2,subject3;
    float TotalPercentage;

    printf("\nEnter rollno:");
    scanf("%d",&rollNo);

    printf("\nEntername:");
    scanf("%s",&name);

    printf("\nmark of subject1:");
    scanf("%d",&subject1);

    printf("\nmark of subject2:");
    scanf("%d",&subject2);

    printf("\nmark of subject3:");
    scanf("%d",&subject3);

    TotalPercentage=((subject1+subject2+subject3)*100)/300;
    if(TotalPercentage>=75){
        printf("\nFirst Class with Distinction");
    }
    else if(TotalPercentage>=60&&TotalPercentage<75){
         printf("\nFirst Class");
    }
    else if("TotalPercentage<60"){
         printf("\nSecond Class");
    }
    return 0;


}
