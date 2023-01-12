/***********************************************************
 * File             : labExp21.c
 * Description      : C Program to find sum of the elements stored in the array through user defined functions using pointers.
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 11/10/2021
 * *******************************************************/
#include<stdio.h>
int sum(int a[100],int n){
    int *x=a, sum=0;
    for(int i=0;i<n;i++)
    sum+=*(x+i);
    return sum;
}
int main(){
    int a[]={1,2,3,4,5,6,7,8};
  printf("sum:%d",sum(a,8));
    return 0;
}
