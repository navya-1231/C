/***********************************************************
 * File             : exp2_25.c
 * Description      : C Program to display the cube of the number upto given an integer
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 04/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int n,i;
    printf("\nEnter number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Number is : %d and cube of the %d is : %d\n",i,i,(i*i*i));

    }
    return 0;
}