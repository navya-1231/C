/***********************************************************
 * File             : labExp23.c
 * Description      : C Program to read a file and to count no. of characters, words and lines.
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 11/10/2021
 * *******************************************************/
#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *f1;char fname[50],ch;
    int l=0,w=0,c=0;
    printf("enter a file name:");
    scanf("%s",fname);
    f1=fopen(fname,"r");
    if(f1==NULL) {
        printf("ERROR!");
        exit(1); }
    while((ch=getc(f1))!=EOF) {
        if(ch!=' '&&ch!='\n')
        c++;
        if(ch==' '||ch=='\n')
        w++;
        if(ch=='\n')
        l++;}
    printf("no. of lines:%d\nno.of words:%d\nno.of characters:%d",l,w,c);
    fclose(f1);}
