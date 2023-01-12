/***********************************************************
 * File             : labExp16.c
 * Description      : C Program to find the factorial of a given Natural Number 
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 11/10/2021
 * *******************************************************/
#include<stdio.h>
int fact=1;
int rec(int num){
    if(num!=0){
    fact*=num--;
    rec(num);}
    return fact;
}
int non_rec(int num){
    int f=1;
    while(num!=0)
    f*=num--;
    return f;}
int main(){
 int num;
 printf("ENTER A NUMBER:");
 scanf("%d",&num);
 printf("factorial found using recursive fn:%d\nfactorial found using non-recursive fn:%d",rec(num),non_rec(num));   
 return 0;
}

