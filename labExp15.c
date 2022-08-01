/***********************************************************
 * File             : labExp15.c
 * Description      : C Program to declare a union containing 5 string variables 
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 11/10/2021
 * *******************************************************/
#include<stdio.h>
#define c_size 100
union address{
    char name[c_size];
    char house_name[c_size];
    char city_name[c_size];
    char state[c_size];
    char pincode[c_size];
}a;
int main(){
    printf("enter name:");
    scanf("%[^\n]",a.name);
    getchar();
    printf("enter house name:");
    scanf("%[^\n]",a.house_name);
    getchar();
    printf("enter city name:");
    scanf("%[^\n]",a.city_name);
    getchar();
    printf("enter state:");
    scanf("%[^\n]",a.state);
    getchar();
    printf("enter pincode:");
    scanf("%[^\n]",a.pincode);
    printf("\n____________________________");
    printf("\nNAME:%s",a.name);
    printf("\nHOUSE NAME:%s",a.house_name);
    printf("\nCITY NAME:%s",a.city_name);
    printf("\nSTATE:%s",a.state);
    printf("\nPINCODE:%s",a.pincode);
    return 0;
}

