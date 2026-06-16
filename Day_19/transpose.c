// Write a program to find transpose of a matrices //

#include <stdio.h>

int main()
{
    int i, j, mat1[3][3], mat2[3][3];

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
            mat2[j][i] = mat1[i][j];
        }
    }

    printf("Transpose of matrix is ");

    for(i = 0; i < 3; i++)
    {
        printf("\n");

        for(j = 0; j < 3; j++)
        {
            printf("%d ", mat2[i][j]);
        }
    }

    return 0;
    
}