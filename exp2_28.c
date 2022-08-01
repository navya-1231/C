/***********************************************************
 * File             : exp2_28.c
 * Description      : C Program to find the HCF and LCM
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 05/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int number1,number2,i,hcf,lcm;
    printf("\nEnter the 1st number : ");
    scanf("%d",&number1);
    printf("\nEnter the 2st number : ");
    scanf("%d",&number2);
    for(i=1;i<=number1;i++){
        if(number1%i==0 && number2%i==0){
            hcf=i;
        }
    }
    lcm=(number1 * number2)/hcf;
    printf("\nThe HCF of given number is %d\nThe LCM of given number is %d",hcf,lcm);

    return 0;
}