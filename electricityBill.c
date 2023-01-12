/************************************************************
 * File             : exp2_13.c
 * Description      : C Program to calculate Electricity bill
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 02/08/2021
 * *******************************************************/
#include<stdio.h>
int main()
{
    char name[30];
    unsigned long ld;
    float units,total;
    printf("\nEnter name:");
    gets(name);
    printf("Enter your customer ID:");
    scanf("%lu",&ld);
    printf("Enter consumed units:");
    scanf("%f",&units);
    //charges per unit rate 
    if(units<=199.99)
    {
        total=units*1.20;
    }
    else if(units>=200 && units<400)
    {
        total=units*1.50;
    }
    else if(units>=400 && units<600)
    {
        total=units*1.80;
    }
    else
    {
        total=units*2.00;
    }
    //condition for subcharges

    if(total>400)
    {
        total=total+(total*0.15);
    }
    else if(units<=100)
    {
        total=100;
    }
    else
    {
       total=total;
    }
    printf("\n\t\t\t\t\t\t\t\t***ELECTRICITY BILL*\n");
    printf("\nName            :\t%s",name);
    printf("\nConsumer ID     :\t%lu",ld);
    printf("\nConsumer Units  :\t%.2f",units);
    printf("\nTotal Amount    :\t%.2f",total);
    return 0;
}

    




























    
