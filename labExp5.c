/***********************************************************
 * File             : labExp5.c
 * Description      : C Program to find the number is prime or not
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 3/10/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int n, i, flag = 1;
    printf("Enter a number: \n");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
        {
        // If n is divisible by any number between
        // 2 and n/2, it is not prime
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);
}