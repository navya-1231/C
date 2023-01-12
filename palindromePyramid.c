/***********************************************************
 * File             : exp2_22.c
 * Description      : C Program to display palindrome pyramid of numbers
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 04/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int i,j,row;

    printf("\nNumber of rows:");
    scanf("%d",&row);

    for(i=1;i<row+1;i++) {
        for(j=row;j>i;j--){
             printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        } 
        for(j=i-1;j>=1;j--){
            printf("%d",j);
        }
      printf("\n");  
    }

    return 0;
}
