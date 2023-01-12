/***********************************************************
 * File             : labExp4.c
 * Description      : C Program to find the largest number
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 3/10/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter 3 different integer values :  ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("\nLargest number = %d \n",num1);
        }
        else
        {
            printf("\nLargest number = %d \n",num3);
        }
    }
    else if(num2>num3)
    {
            printf("\nLargest number = %d \n",num2);
        }
        else
        {
            printf("\nLargest number = %d \n",num3);
        }
    return 0;
}
