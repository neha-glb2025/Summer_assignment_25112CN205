// Write a program to check palindrome string //

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20], str1[20];

    printf("enter a string ");
    scanf("%s", str);

    int len = 0, i, j = 0;

    while(str[len] != '\0')
    {
        len++;
    }

    for(i = len - 1; i >= 0; i--)
    {
        str1[j] = str[i];
        j++;
    }

    str1[j] = '\0';
    
    if(strcmp(str1, str) == 0)
    printf("palindrome string");

    else
    printf("not palindrome string");

    return 0;
}

