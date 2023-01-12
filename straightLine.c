/***********************************************************
 * File             : exp2_20.c
 * Description      : C Program to check three points lie on straight line
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 02/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    float x1,y1,x2,y2,x3,y3,m,n;
    printf("\nEnter points(x1,y1):");
    scanf("%f%f",&x1,&y1);

    printf("\nEnter points(x2,y2):");
    scanf("%f%f",&x2,&y2);

    printf("\nEnter points(x3,y3):");
    scanf("%f%f",&x3,&y3);

    m=(y2-y1)/(x2-x1);
    n=(y3-y2)/(x3-x2);
    if(m==n)
    {
        printf("\nAll the three points fall on one straight line.");

    }
    else
    {
        printf("\nAll the three points are not on one straight line.");

    }
    return 0;

}
