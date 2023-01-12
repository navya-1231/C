/***********************************************************
 * File             : exp2_27.c
 * Description      : C Program to convert decimal number to octal number
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 05/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int input,i=1,remainder,octantNumber=0,duplicateInput;
    printf("\nEnter a octal number to convert : ");
    scanf("%d",&input);
    duplicateInput=input;
    while (input>0){
        remainder=input%8;
        input=input/8;
        octantNumber=octantNumber+remainder*i;
        i=i*10;
    }
    printf("The decimal equivalent of octal number %d is %d",duplicateInput,octantNumber);
    return 0;
}
