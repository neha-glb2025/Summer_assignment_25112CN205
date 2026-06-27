// Write a program to create quiz application //

#include <stdio.h>

int main() 
{
    int score = 0, ans;

    printf("Quiz App\n");

    printf("\nQ1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if (ans == 2)
        score++;

    printf("\nQ2. What is the capital of U.P?\n");
    printf("1. Lucknow\n2. Delhi\n3. Kanpur\n4. Mumbai\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if (ans == 1)
        score++;

    printf("\nQ3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);

    if (ans == 3)
        score++;

    printf("\nYour final score is: %d out of 3\n", score);

    return 0;
}