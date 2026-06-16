// Write a program to find row wise sum //

#include <stdio.h>

int main()
{
    int i, j, mat1[3][3], sum;

    printf("enter elements of matrix 1 ");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    for(i = 0; i < 3; i++)
    { 
        sum = 0;

        for(j = 0; j < 3; j++)
        {
            sum += mat1[i][j];
        }

        printf("sum of row %d = %d\n", i + 1, sum);
    }

    return 0; 
}