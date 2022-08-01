/***********************************************************
 * File             : exp2_24.c
 * Description      : C Program to pascal's triangle
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 04/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int row,coef=1,space,i,j;
    printf("\nEnter the number of rows: ");
    scanf("%d",&row);
    
    for(i=0;i<row;i++){
        for(space=1; space <= row-i; space++)
        printf("  ");

        for(j=0;j<=i;j++) {
            if(j==0 || i==0)
            coef=1;
            else
            coef=coef*(i-j+1)/j;

            printf("%4d",coef);
        
        }
        printf("\n");
    }
    return 0;
}