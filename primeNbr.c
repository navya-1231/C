/***********************************************************
 * File             : exp2_23.c
 * Description      : C Program to determine prime numbers between range
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 04/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int startRange,endRange,i,j,remainder;
    printf("\nEnter starting number of range: ");
    scanf("%d",&startRange);
    printf("\nEnter ending number of range: ");
    scanf("%d",&endRange);
    printf("The prime number between %d and %d are:\n",startRange,endRange);
    for(i=startRange;i<=endRange;i++){
        for(j=2;j<=i/2;j++){
            remainder=i%j;
            if(remainder==0){
                break;
            }
        }
        if(j>i/2 && i!=1){
            printf("%d\t",i);
        }
    }
    return 0;
}
