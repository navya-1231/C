/***********************************************************
 * File             : exp2_34.c
 * Description      : C Program to find the sum of the series 1+11+111+1111+..n terms.
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 010/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int n,i,t=1,sum=0;
    printf("Input the number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d",t);
        if(i<n)
        {
             printf(" + ");
        }
        sum=sum+t;
        t=(t*10)+1;
    }
     printf("\nThe Sum is : %d\n",sum);
}