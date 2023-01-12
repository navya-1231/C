/***********************************************************
 * File             : exp2_31.c
 * Description      : C Program to print Solid Half Diamond pattern printing using stars
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 09/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int row,i,j;
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
        for(i=row;i>=1;i--){
            for(j=1;j<i;j++){
                printf("* ");
            }
            printf("\n");
        }
    return 0;
}
