// Write a program to find the character frequency in a string //

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    char str1;

    printf("enter string ");
    scanf("%s", str);

    printf("enter char that freq has to be find ");
    scanf(" %c", &str1);

    int len = 0, i, j = 0, C = 0;

    while(str[len] != '\0')
    {
        len++;
    }

    for(i = 0; i < len; i++)
    {
       if(str[i] == str1)
       C++; 
    }

    printf("freq of %c = %d", str1, C);

    return 0;
}
