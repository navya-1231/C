/************************************************************
 * File             : exp2_9.c
 * Description      : C Program to read temperature in centigrade
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 02/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int temp=0;
    printf("\nEnter the temperature in centigrade:");
    scanf("%d",&temp);
    if (temp<0){
    printf("Freezing weather");
    }
    else if (temp>0 && temp<=10){
    printf("Very Cold weather");
    }
    else if (temp>10 && temp<=20){
    printf("Cold weather");
    }
    else if (temp>20 && temp<=30){
    printf("Normal in Temp");
    }
    else if (temp>30 && temp<=40){
    printf("Its Hot");
    }
    else {
    printf("Its Very Hot");
    }

return 0;
}
