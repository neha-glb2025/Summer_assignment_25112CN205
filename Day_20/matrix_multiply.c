// Write a program to find matrix multiply //

#include <stdio.h>

int main()
{
    int i, j, k, mat1[3][3], mat2[3][3], mat3[3][3], sum;

    printf("enter elements of matrix 1 ");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("enter elements of matrix 2 ");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            sum = 0;
            for(k = 0; k < 3; k++)
            {
sum += mat1[i][k] * mat2[k][j];
            } 
            
            mat3[i][j] = sum;
        }
    }

    printf("multiplication of matrices is ");

    for(i = 0; i < 3; i++)
    {
        printf("\n");

        for(j = 0; j < 3; j++)
        {
            printf("%d ", mat3[i][j]);
        }
    }

    return 0;
    
}