/************************************************************
 * File             : exp2_11.c
 * Description      : C Program to check whether triangle is Equilateral,Isoceless or Scalene
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 02/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int side1,side2,side3;
    printf("\nEnter three sides of triangle:");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1==side2 && side2==side3){
        printf("Equilateral triangle.");
    }
    else if(side1==side2 || side1==side3 || side2==side3){
        printf("Isoceless triangle.");
    }
    else{
        printf("Scalence triangle.");
    }
    return 0;

}