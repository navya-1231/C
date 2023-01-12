/************************************************************
 * File             : exp2_10.c
 * Description      : C Program to determine the youngest of the three
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 02/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int Ram,Shyam,Ajay;
    printf("\nEnter the Ages of Ram,Shyam,Ajay:");
    scanf("%d%d%d",&Ram,&Shyam,&Ajay);
    if(Ram<Shyam && Ram<Ajay){
        printf("Ram is youngest");
    
    }
    if(Shyam<Ram && Shyam<Ajay){
        printf("Shyam is youngest");
    
    }
    else if(Ajay<Ram && Ajay<Shyam){
        printf("Ajay is youngest");
    
    }
    return 0;

}
