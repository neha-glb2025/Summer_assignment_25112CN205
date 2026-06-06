// Write a program to generate fibonacci series //

#include <stdio.h>

int main()
{
    int term1 = 0, term2 = 1, nexterm, n, i;

    printf("enter a limit ");
    scanf("%d", &n);
    printf("%d %d ", term1, term2);

    for(i = 3 ; i <= n ; i++)
    {
        nexterm = term1 + term2;

        printf("%d ", nexterm);

        term1 = term2;
        term2 = nexterm;
    }

    return 0;
}