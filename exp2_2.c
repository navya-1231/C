/***********************************************************
 * File             : exp2_2.c
 * Description      : C Program to determine roots of the quadratic equation
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 31/07/2021
 * *******************************************************/

#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    double realPart,imaginaryPart;
    double d;
    double root1,root2;
    printf("\nEnter the values of a,b and c in the quadratic equation ax*x+bx+c:");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=b*b-4*a*c;

    if(d>0){
         root1=(-b+sqrt(d))/(2*a);
         root2=(-b-sqrt(d))/(2*a);
         printf("\nThe roots of the quadratic equation are %0.2lf and %0.2lf.",root1,root2);
}
    else if(d<0){
         imaginaryPart=sqrt(-d)/(2*a);
         printf("\nThe roots of the quadratic equation are %0.2lf+%0.2lfi and %0.2lf-%0.2lfi.",realPart,imaginaryPart,realPart,imaginaryPart);
}
    else{
        root1=root2=-b/(2*a);
        printf("The roots of the quadratic eqation are %0.2lf and %0.2lf",root1,root2);

}
return 0;
}