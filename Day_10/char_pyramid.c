/* Write a program to print character pyramid  A 
                                            A B A
                                          A B C B A
                                         A B C D C B A
                                       A B C D E D C B A*/

#include <stdio.h>

int main()
{
    char i, j;

    for(i = 'A'; i <= 'E'; i++)
    {
        for(j = 'A'; j <='E' - (i - 'A'); j++)
        {
            printf(" ");
        }

        for(j = 'A'; j <= i; j++)
        {
            printf("%c ", j);
        }

        for(j = i - 1; j >= 'A'; j--)
        {
            printf("%c ",j);
        }

        printf("\n");
    }

    return 0;

}
    