/************************************************************
 * File             : exp2_19.c
 * Description      : C Program to check whether vowel or constant
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 02/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the alphabet:");
    scanf("%c",&ch);
    switch(ch)
    {
        case'A':
        case'a':
        case'E':
        case'e':
        case'I':
        case'i':
        case'O':
        case'o':
        case'U':
        case'u':
             printf("The choice is a vowel");
             break;
        default:
             printf("The choice is a consonant");
             break;

    }
    return 0;
}
