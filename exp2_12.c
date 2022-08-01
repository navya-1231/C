/************************************************************
 * File             : exp2_12.c
 * Description      : C Program to check whether triangle is Valid or Not
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 02/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int angle1,angle2,angle3,sum;
    printf("\nEnter three angles of triangle:");
    scanf("%d%d%d",&angle1,&angle2,&angle3);
    sum=angle1+angle2+angle3;
    if(sum==180){
        printf("\nTriangle is valid.");
    }
    else{
        printf("\nTriangle is not valid.");
    }
    return 0;

}