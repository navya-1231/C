/************************************************************
 * File             : exp2_16.c
 * Description      : C Program to read Month in integer and display Month
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 02/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int monthNo;
    printf("Input Month No :");
    scanf("%d",&monthNo);
    switch(monthNo)
    {
        case 1:
              printf("\nJanuary");
              break;
        case 2:
              printf("\nFebruary");
              break;  
        case 3:
              printf("\nMarch");
              break;  
        case 4:
              printf("\nApril");
              break; 
        case 5:
              printf("\nMay");
              break;
        case 6:
              printf("\nJune");
              break;
        case 7:
              printf("\nJuly");
              break;
        case 8:
              printf("\nAugust");
              break;
        case 9:
              printf("\nSeptember");
              break;
        case 10:
              printf("\nOctober");
              break;
         case 11:
              printf("\nNovember");
              break;
         case 12:
              printf("\nDecember");
              break;
         default:
                 printf("invalid Month number.\nPlease try again...");
                 break;
        }
        return 0;
}
                          
                    
                          
                          
                                                   
        
    

