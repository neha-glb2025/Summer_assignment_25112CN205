// Write a program to find nth fibonacci term //

#include <stdio.h>

int main()
{
    int n, term1 = 0, term2 = 1, i, nexterm;

    printf("enter nth term ");
    scanf("%d", &n);

    if(n == 1)
    printf("%d ", term1);

    if(n == 2)
    printf("%d ", term2);

    else
    {
        for(i =3 ; i <= n ; i++)
        {
            nexterm = term1 + term2;
            term1 = term2;
            term2 = nexterm;
        }

        printf("%d", nexterm);
    }

    return 0;
}