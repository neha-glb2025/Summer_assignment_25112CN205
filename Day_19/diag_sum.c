// Write a program to find diagonal sum //

#include <stdio.h>

int main()
{
    int i, j, mat1[3][3], diag_sum = 0;

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
        for(j = 0; j < 3; j++)
        {
            if(i == j)
            diag_sum += mat1[i][j];
        }
    }

    printf("diagonal sum of matrix = %d", diag_sum);

    return 0;    
}