// Write a program to write a function for fibonacci //

#include <stdio.h>

void fibo(int limit);
int main()
{
    int limit;

    printf("enter a limit");
    scanf("%d", &limit);

    fibo(limit);

    return 0;
}

void fibo(int limit)
{
    int term1 = 0, term2 = 1, nexterm, i;

    printf("%d %d ", term1, term2);

    for(i = 3; i <= limit; i++)
    {
        nexterm = term1 + term2;

        printf("%d ", nexterm);

        term1 = term2;
        term2 = nexterm;
    }
}