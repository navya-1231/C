/***********************************************************
 * File             : labExp17.c
 * Description      : C Program to reverse a string using user defined function
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 11/10/2021
 * *******************************************************/
#include<stdio.h>
#include<string.h>
void reverse(char ch[50]){
    int c;char rev_ch[50];
    c=strlen(ch);
    for(int i=c-1,j=0;i>=0,j<=c;i--,j++)
    rev_ch[j]=ch[i];
    printf("reversed string:%s",rev_ch);}
int main(){
    char ch[50];
    printf("ENTER A WORD:");
    scanf("%s",ch);
    reverse(ch);
    return 0;
}
