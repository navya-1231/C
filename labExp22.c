/***********************************************************
 * File             : labExp22.c
 * Description      : C Program to create a file and to write, read and append data to this file.
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 11/10/2021
 * *******************************************************/
#include<stdio.h>
void main(){
    char ch,data[100],xtra[100];
    FILE *f1;
    f1=fopen("sample.txt","w");
    printf("Enter data:");
    fgets(data,100,stdin);
    fputs(data,f1);
    fclose(f1);
    printf("file created");
    f1=fopen("sample.txt","r");
    printf("\ncontents stored in this file are:");
    while((ch=fgetc(f1))!=EOF)
    printf("%c",ch);
    fclose(f1);
    f1=fopen("sample.txt","a");
    printf("enter data to append:");
    fgets(xtra,100,stdin);
    fputs(xtra,f1);
    fclose(f1);
    f1=fopen("sample.txt","r");
    printf("final contents:");
    while((ch=fgetc(f1))!=EOF)
    printf("%c",ch);
    fclose(f1);
}

