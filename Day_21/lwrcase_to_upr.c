// WAP to convert a string from lowercase to uppercase //

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];

    printf("enter string ");
    scanf("%s", str);

    for(int i = 0; (str[i] != '\0'); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32;
    }

    printf("uppercase string = %s", str);

    return 0;
}