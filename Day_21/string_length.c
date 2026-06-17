// WAP to find the length of a string //

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];

    printf("Enter a string ");
    scanf("%s", str);

    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

printf("length of string = %d", i);

return 0;
}