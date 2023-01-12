/***********************************************************
 * File             : labExp18.c
 * Description      : C Program to implement a menu driven program for matrix operations
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 11/10/2021
 * *******************************************************/
#include<stdio.h>
void display(int a[10][10],int m,int n){
     for(int i=0;i<m;i++)
     {
       for(int j=0;j<n;j++)
       printf("%d ",a[i][j]);
       printf("\n");
     }  }

void add(int a[10][10],int b[10][10],int m,int n,int p,int q){
    int sum[10][10];
    if(m!=p||n!=q)
    printf("MATRIX CANNOT BE ADDED");
       for(int i=0;i<m;i++)
       for(int j=0;j<n;j++)
           sum[i][j]=a[i][j]+b[i][j];
           display(sum,m,n);}
void multiply(int a[10][10],int b[10][10],int m,int n,int p,int q){
    int pdt[10][10];
    if(n!=p)
    printf("matrix cannot be multiplied");
    for(int i=0;i<m;i++)
       for(int j=0;j<q;j++)
       for(int k=0;k<n;k++)
       pdt[i][j]+=a[i][k]*b[k][j];
     display(pdt,m,q); 
}
void transpose(int a[10][10],int m,int n){
    int t[10][10];
     for(int i=0;i<m;i++)
       for(int j=0;j<n;j++)
       t[i][j]=a[j][i];
       display(t,n,m);}
void readm(int c){
    int m,n,p,q,a[10][10],b[10][10];
    printf("enter the no.of rows of matrix A:");
    scanf("%d",&m);
    printf("enter the no.of columns of matrix A:");
    scanf("%d",&n); 
    if(c==1||c==2)
    {
    printf("enter the no.of rows of matrix B:");
    scanf("%d",&p);
    printf("enter the no.of columns of matrix B:");
    scanf("%d",&q); 
    }
    printf("ENTER MATRIX A:\n\t");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
           scanf("%d",&a[i][j]);
    if(c==1||c==2) {
        printf("ENTER MATRIX B:\n\t");
        for(int i=0;i<p;i++)
         for(int j=0;j<q;j++)
           scanf("%d",&b[i][j]);    }
    switch(c) {
        case 1:add(a,b,m,n,p,q);break;
        case 2:multiply(a,b,m,n,p,q);break;
        case 3:transpose(a,m,n);break;
        default:printf("INVALID INPUT");
    }}
int main(){
    int a[50][50],b[50][50],k,l,c;
    printf("\t\t\tMENU\n\n\t\t1.ADDITION\n\n\t\t2.MULTIPLICATION\n\n\t\t3.TRANSPOSE\n\n\n\twhich task would you like to perform(1/2/3):");
    scanf("%d",&c);
    readm(c);
    return 0;}
