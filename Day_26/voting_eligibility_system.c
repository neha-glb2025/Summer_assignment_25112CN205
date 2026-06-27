// Write a program to create voting elibility system //

#include <stdio.h>

int main()
{
    int age;

    printf("Voting eligibility system\n");

    printf("enter age ");
    scanf("%d", &age);

    if(age >= 18)
    printf("eligible for voting");

    else
    printf("not eligible for voting");

    return 0;
}