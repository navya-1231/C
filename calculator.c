/**********************************************************
 * File             : exp2_1.c
 * Description      : C Program to demonstrate a calculator(+,-,*,/,%)
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 31/07/2021
 * *******************************************************/
#include<stdio.h>
int main()
{
    int number1,number2;
    char operator;
    printf("\nEnter the operations to be performed(+,-,*,/,%%):");
    scanf("%c",&operator);
    printf("\nEnter two integer number:");
    scanf("%d%d",&number1,&number2);
    switch(operator){
        case '+':
               printf("\nSum=%d",number1+number2);
               break;
        case '-':
               printf("Difference=%d",number1-number2);
               break;
        case '*':
               printf("Multiplication=%d",number1*number2);
               break;
        case '/':
               printf("Division=%d",number1/number2);
               break;
        case '%':
               printf("Modulus=%d",number1%number2);
               break;
        default:
               printf("invalid opertor");
               break;
    }
    return 0;
}
    
