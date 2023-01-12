/***********************************************************
 * File             : labExp7.c
 * Description      : C Program to find their sum and average
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 11/08/2021
 * *******************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    int n, i,a[100];
    float sum=0,avg;
    printf("Enter  number of elemnts: \n");
    scanf("%d", &n);
    printf("Enter the elements..\n");
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
         sum=sum+a[i];
   }
    avg=sum/n;
   printf("Sum=%f Average=%f\n",sum,avg);
}
