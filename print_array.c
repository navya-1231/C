/***********************************************************
 * File             : labExp20.c
 * Description      : C Program to  read and print array using pointers.
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 11/10/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int a[50],s;int *x=a;
    printf("Enter the size of the array:");
    scanf("%d",&s);
    printf("Enter the elements of the array:");
    for(int i=0;i<s;i++)
        scanf("%d",x+i);
    
    printf("THE ELEMENTS ARE:");
    for(int i=0;i<s;i++)   {
        printf("%d",*(x+i));
        printf(" ");
    }
    return 0;   
}
