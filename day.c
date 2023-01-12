/************************************************************
 * File             : exp2_15.c
 * Description      : C Program to read day in integer name in word
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 02/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int day;
    printf("Input day:");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
              printf("\nMonday");
              break;
        case 2:
              printf("\nTuesday");
              break;
        case 3:
              printf("\nWednesday");
              break;
        case 4:
              printf("\nThursday");
              break; 
        case 5:
              printf("\nFridayday");
              break;
        case 6:
              printf("\nSaturday");
              break;
        case 7:
              printf("\nSunday");
              break;
        default:

              printf("invalid day.\nPlease try again...");
              break;
    }
    return 0;
}
