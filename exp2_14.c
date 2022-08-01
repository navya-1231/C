/************************************************************
 * File             : exp2_14.c
 * Description      : C Program to find Absolute value of a number
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 02/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int number;
    printf("\nEnter any number to find absolute value of a number:");
    scanf("\n%d",&number);
    if(number<0){
        number=(-1)*number;
        printf("\nAbsolute value is=%d",number);
        return 0;
    }
}