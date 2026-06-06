/* Write a program to print reverse pyramid    * * * * * * * * * 
                                                * * * * * * * 
                                                 * * * * * 
                                                  * * * 
                                                    *    */
#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
for(j = 1; j <= i - 1; j++)
{
    printf(" ");
}

        for(j = 9; j >= (2 * i) - 1 ; j--)
        {
            printf(" * ");
        }

        printf("\n");
    }

    return 0;
}
