// Write a program to find max occurring character //

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string ");
    fgets(str, sizeof(str), stdin);

    int maxFreq = 0;
    char maxChar;

    for(i = 0; str[i] != '\0'; i++) {
        int count = 1;

        if(str[i] == ' ' || str[i] == '\n')
            continue;

        for(j = i + 1; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                count++;
            }
        }

        if(count > maxFreq) {
            maxFreq = count;
            maxChar = str[i];
        }
    }

    printf("Maximum frequency character = %c\n", maxChar);
    printf("Frequency = %d\n", maxFreq);

    return 0;
}