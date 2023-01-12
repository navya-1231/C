/************************************************************
 * File             : exp2_6.c
 * Description      : C Program to determine odd or even number
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 02/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int number;
    printf("Enter an integer:");
    scanf("%d",&number);
    //true if num is perfectly divisible by 2
    if(number%2==0)
        printf("%d is even.",number);
    else
        printf("%d is odd.",number);
    return 0;

}
