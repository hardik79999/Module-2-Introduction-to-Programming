#include <stdio.h>

int main() 
{
    int i, j, k;

    // 2x2 Matrices
    int mat1[2][2], mat2[2][2], sum[2][2];

    printf("Enter 1st 2x2 matrix:\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            printf("mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter 2nd 2x2 matrix:\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            printf("mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Adding 2x2 Matrices
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j];

    printf("Sum of 2x2 matrices:\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    // 3x3 Matrix Multiplication
    int a[3][3], b[3][3], result[3][3] = {0};

    printf("\nEnter 1st 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) 
		{
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    printf("Enter 2nd 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) 
		{
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }

    // Multiplying 3x3 Matrices
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            for (k = 0; k < 3; k++)
                result[i][j] += a[i][k] * b[k][j];

    printf("Product of 3x3 matrices:\n");
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}

