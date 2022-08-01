/************************************************************
 * File             : exp2_29.c
 * Description      : C Program to check the given number is a perfect number or not
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 09/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int number,sum=0,i;
    printf("\nEnter a number : ");
    scanf("%d",&number);
    for(i=1;i<number;i++){
        if(number%i==0){
            sum=sum+i;
        }
    }
    if(sum==number){
       printf("%d is perfect number",number); 
    }
    else{
        printf("%d is not a perfect number",number);
    }
    
    return 0;
}