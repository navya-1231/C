/***********************************************************
 * File             : exp2_38.c
 * Description      : C Program that generates a random number and asks the user to guess what the number is
 * Author           : Navya Saju
 * Version          : 1.0
 * Date             : 11/08/2021
 * *******************************************************/
#include<stdio.h>
int main(){
    int num,guess,tries = 0;
    srand(time(0));
    num=rand() % 100 + 1;
    printf("Guess My Number Game\n\n");
    do
    {
        printf("Enter a guess between 1 and 100 : ");
        scanf("%d", &guess);
        tries++;

        if (guess > num)
        {
            printf("Too high!\n\n");
        }
        else if (guess < num)
        {
             printf("Too low!\n\n");
        }
        else
        {
            printf("\nCorrect! You got it in %d guesses!\n", tries);
        } 

    }while (guess != num);

 return 0;
}