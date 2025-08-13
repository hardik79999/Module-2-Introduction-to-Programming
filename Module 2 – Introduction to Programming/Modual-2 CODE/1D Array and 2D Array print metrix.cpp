#include <stdio.h>

int main() 
{
    // 1D Array
    int arr[5] = {10, 20, 30, 40, 50};
    printf("1D Array elements:\n");
    for(int i = 0; i < 5; i++) 
	{
        printf("%d ", arr[i]);
    }

    // 2D Array
    int matrix[3][3], sum = 0;
    printf("\n\nEnter elements for 3x3 matrix:\n");
    for(int i = 0; i < 3; i++) 
	{
        for(int j = 0; j < 3; j++) 
		{
            printf("Element %d %d: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("\n2D Array (Matrix):\n");
    for(int i = 0; i < 3; i++) 
	{
        for(int j = 0; j < 3; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all elements in matrix = %d\n", sum);

    return 0;
}

