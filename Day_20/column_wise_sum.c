// Write a program to find column wise sum //

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
    
    for(j = 0; j < 3; j++)
    { 
        sum = 0;

        for(i = 0; i < 3; i++)
        {
            sum += mat1[i][j];
        }

        printf("sum of column %d = %d\n", j + 1, sum);
    }

    return 0; 
}