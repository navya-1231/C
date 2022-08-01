/***********************************************************
 * File             : exp2_5.c
 * Description      : C Program to determine eligibility for admission
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 02/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int maths,physics,chemistry;
    printf("\nMaths score:");
    scanf("%d",&maths);

    printf("\nChemistry score:");
    scanf("%d",&physics);

    printf("\nPhysics score:");
    scanf("%d",&chemistry);

    if(maths>=65 && physics>=55 && chemistry>=50 && maths+physics+chemistry>=190 ||(maths+physics>=140))
    {
       printf("\nYou are eligible for admission");
    }
    else{
         printf("\nYou are not eligible for admission");
    }
    return 0;
}
