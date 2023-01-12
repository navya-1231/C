/***********************************************************
 * File             : labExp13.c
 * Description      : C Program to read distance between 2points
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 11/08/2021
 * *******************************************************/
#include <stdio.h>
int main(){
  structure point {
    int p1.x,p1.y
    int p2.x,p2.y
  }p3.x,p3.y;
  printf("Enter the first point(x1,y1)\n"); 
  scanf("%d,%d",&p1.x,&p1.y);
  printf("Enter the second point(x2,y2)\n"); 
  scanf("%d,%d",&p2.x,&p2.y);
  p3.x=p1.x+p2.x;
  p3.y=p1.y+p2.y;
  printf("new point after addition\n");
  printf("(%d,%d)\n",p3.x,p3.y);
  return 0;
}
