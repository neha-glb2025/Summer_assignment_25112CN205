// WAP to count no. of vowels and consonants in a string //

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int C_vowel = 0, C_consonant = 0;

    printf("enter string ");
    scanf("%s", str);

    int j = 0, len = 0;

    while(str[len] != '\0')
    {
        len++;
    }

    for(j = 0; j < len; j++)
    {
        if(str[j] == 'A' || str[j] == 'E' || str[j] == 'O' || str[j] == 'I' || str[j] == 'U' || str[j] == 'a' || str[j] == 'e' || str[j] == 'o' || str[j] == 'u' || str[j] == 'i')
        C_vowel += 1;

        else
        C_consonant += 1;   
    }

    printf("no. of vowels = %d\n", C_vowel);
    printf("no. of consonant = %d", C_consonant);

    return 0;
}