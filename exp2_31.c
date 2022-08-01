/***********************************************************
 * File             : exp2_31.c
 * Description      : C Program to print hollow diamond  pattern
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 09/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int row,i,j;
    printf("Enter number of rows : ");
    scanf("%d",&row);

    for(i=1;i<=row;i++){
        for(j=row;j>i;j--){
            printf(" ");
        }
        printf("*");
        for(j=1;j<(i-1)*2;j++){
            printf(" ");
        }
        if(i==1){
            printf("\n");
        }
        else{
            printf("*\n");
        }
        
    }
    for(i=row-1;i>=1;i--){
        for(j=row;j>i;j--){
            printf(" ");
        }
        printf("*");
        for(j=1;j<(i-1)*2;j++){
            printf(" ");
        }
        if(i==1){
        printf("\n");
        }else{
            printf("*\n");
        }
    }
    return 0;
}