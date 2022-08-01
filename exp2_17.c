/*************************************************************
 * File             : exp2_17.c
 * Description      : C Program to determine Area of the rectangle greater than Perimeter
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 02/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    float length ,breadth,area,perimeter;
    
    printf("Enter the length of rectangle:");
    scanf("%f",&length);

    printf("Enter the breadth of rectangle:");
    scanf("%f",&breadth);

    area=length*breadth;
    perimeter=2*(length+breadth);

    printf("The area of rectangle:%f\n",area);
    printf("The perimeter of rectangle:%f\n",perimeter);

    if(area>perimeter)
       printf("Area of rectangle is greater than it's perimeter");
    else
       printf("Perimeter of rectangle is greater than it's area");
    return 0; 
}  






