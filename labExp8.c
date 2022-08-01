/***********************************************************
 * File             : labExp8.c
 * Description      : C Program to read array using an algorithm 
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 11/10/2021
 * *******************************************************/
#include <stdio.h>
int main()
{
    int n, i,a[100],key,flag=-1;
    printf("Enter number of elements: \n");
    scanf("%d",&n);
    printf("Enter the list of elements..\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to search..\n");
        scanf("%d",&key);
    for (i=0;i<n;i++)
        if (a[i]==key)
         { flag=1;break;}
   if(flag==1)
         printf("Element is found at index %d\n",i);
   else
         printf("Element is not found\n");  
return 0;
}
