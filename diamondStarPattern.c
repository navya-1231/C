/***********************************************************
 * File             : exp2_30.c
 * Description      : C Program to print diamond star patterns
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
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        
        for(j=1;j<=i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=row-1;i>0;i--){
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        for(j=1;j<=i*2-1;j++){
            printf("*");
    }
    printf("\n");
    }
    return 0;
}
