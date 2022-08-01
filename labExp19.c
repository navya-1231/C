/***********************************************************
 * File             : labExp19.c
 * Description      : C Program to add and swap no. s through a user defined function using pointers.
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 11/10/2021
 * *******************************************************/
#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;}
int main()
{
    int a,b,*x,*y,sum;
    x=&a;y=&b;
    printf("INPUT 2 NUMBERS:");
    scanf("%d%d",&a,&b);
    sum=*x+*y;
    printf("THE 2 NO.s are:%d %d",a,b);
    printf("\nSUM:%d",sum);
    swap(&a,&b);
    printf("\nNO.s after being swapped:%d %d",a,b);
    return 0;
}
