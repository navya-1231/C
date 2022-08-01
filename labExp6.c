/***********************************************************
 * File             : labExp6.c
 * Description      : C Program to check whether the number is Armstrong or not
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 11/08/2021
 * *******************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n, i,nd,d,sum=0,temp;
    char str[100];
    printf("Enter a number: \n");
    scanf("%d", &n); //finding number of digits(nd) in the number
    //by converting into string and find the length
    sprintf(str,"%d",n);
    nd=strlen(str);
    temp=n;
    while(temp!=0)
    { d=temp%10;
        sum=sum+pow(d,nd);
        temp=temp/10;
    }
    if ( n==sum)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not a Armstrong number\n", n);
}
 