/***********************************************************
 * File             : exp2_21.c
 * Description      : C Program to find the number and sum of all integer between 100 and 200 which are divisible by 9
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 02/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int i,sum=0;
    printf("Numbers between 100 amd 200,divisible by 9:\n");
    for(i=108;i<200;i=i+9){
        printf("%d\t",i);
        sum=sum+i;
    }
    printf("\nSum of all integer between 100 and 200 is %d",sum);
    return 0;
}
