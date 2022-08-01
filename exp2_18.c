/************************************************************
 * File             : exp2_18.c
 * Description      : C Program to declare grade
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 02/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    char grade;
    printf("Input the grade:");
    scanf("%c",&grade);
    switch(grade)
    {
        case 'E':
               printf("Excellent");
               break;
        case 'V':
               printf("Very Good");
               break;  
        case 'G':
               printf("Good");
               break; 
        case 'A':
               printf("Average");
               break; 
        case 'F':
               printf("Fails");
               break;   
        default:
               printf("\nInvalid Grade Found");
               break;                    
    }
    return 0;
}