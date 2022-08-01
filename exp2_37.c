/***********************************************************
 * File             : exp2_37.c
 * Description      : C Program to display total amount after n days
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 11/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int money,day,total=0;
    printf("Enter the amount given on 1st day : ");
    scanf("%d",&money);
    printf("Enter number of days : ");
    scanf("%d",&day);

    for(int i=1;i<=day;i++){
        total=total+money;
        money=money*2;
    }
    printf("The total amount received after %d days : %d",day,total);
    return 0;
}