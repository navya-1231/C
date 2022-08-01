/**********************************************************
 * File             : exp2_3.c
 * Description      : C Program to determine the eligibility for casting vote
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 31/07/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Congratulation!You are eligible for voting");
    }
    else
    {
        printf("You are not eligible");
    }
    return 0;
}