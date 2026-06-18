// Write a program to remove spaces from string //

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20], str1[20];

    printf("enter string ");
    fgets(str, 50, stdin);

    int len = 0, j = 0, i;

    while(str[len] != 0)
    {
        len++;
    }

    for(i = 0; i < len; i++)
    {
        if(str[i] != ' ')
       { 
        str1[j] = str[i];
        j++;
       }
    }

    str1[j] = '\0';

    printf("string after remove spaces = %s", str1);

    return 0;
}