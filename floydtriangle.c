/***********************************************************
 * File             : exp2_35.c
 * Description      : C Program to print Floyd's Triangle
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 10/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int n,i,j,k=1;
    printf("Enter the number of rows of Floyd's triangle to print\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
    }
