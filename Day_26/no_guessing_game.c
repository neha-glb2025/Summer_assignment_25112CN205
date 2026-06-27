// Write a program to create number guessing game //

#include <stdio.h>

int main() 
{
    int secret = 25;
    int guess;

    printf("Guess the number\n");

    do {
        printf("Enter your guess ");
        scanf("%d", &guess);

        if (guess > secret)
            printf("Too High");

        else if (guess < secret)
            printf("Too Low");

    } 
    while (guess != secret);

    printf("Correct Guess");

    return 0;
}