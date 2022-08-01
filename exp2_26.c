/***********************************************************
 * File             : exp2_26.c
 * Description      : C Program to convert binary to decimal
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 05/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int num,binaryNumber,decimalNumber=0,base=1,rem;
    printf("\nInput a binary number:");
    scanf("%d",&num);

    binaryNumber=num;

    while(num>0)
    {
        rem=num%10;
        decimalNumber=decimalNumber+rem*base;
        num=num/10;
        base=base*2;
    }
    printf("\nThe Binary number: %d",binaryNumber);
    printf("\nThe equivalent Decimal number: %d",decimalNumber);

    return 0;
}
