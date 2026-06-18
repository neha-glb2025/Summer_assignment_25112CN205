// Write a program to count the no. of words in a sentence //

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];

    printf("enter a sentence  ");
    fgets(str, sizeof(str), stdin);

    int len = 0, i, C = 0;

    while(str[len] != '\0')
    {
        len++;
    }

    for(i = 0; i < len; i++)
    {
if(str[i] == ' ')
C++;
    }

    printf("no. of words = %d", (C + 1));

    return 0;
}