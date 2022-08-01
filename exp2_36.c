/***********************************************************
 * File             : exp2_36.c
 * Description      : C Program to print a Calender
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 10/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int i,j,k,day,dt=1;
    printf("C Program to Print a Calender With Start With Input Day\n\n");
    printf("Enter Total Numbers of Days in a Month : ");
    scanf("%d",&day);
    printf("Enter First Day Start From <0-Mon......5-Sat & 6-Sun>End With Sunday : ");
    scanf("%d",&k);
    printf("\nMon \tTue \tWed \tThu \tFri \tSat \tSun \n\n");
    scanf("_______________________________________________________\n");

    for(j=k;j>0;j--){
        printf("\t");
    }
    while(dt<=day){
        if(k!=0)
        {
            if(k%7==0)
            printf("\n");
        }
        printf("%d\t",dt);
        dt++;
        k++;    }
        return 0;
}