#include <stdio.h>

int main() 
{
    int arr[10], i, j, temp;
    int max, min;

    // Input 10 numbers
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) 
	{
        scanf("%d", &arr[i]);
    }

    // Find max and min
    max = min = arr[0];
    for (i = 1; i < 10; i++) 
	{
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    // Sort the array (ascending order)
    for (i = 0; i < 9; i++) 
	{
        for (j = i + 1; j < 10; j++) 
		{
            if (arr[i] > arr[j]) 
			{
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
       
    // Output
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    printf("Sorted array: ");
    for (i = 0; i < 10; i++) 
	{
        printf("%d ", arr[i]);
    }

    return 0;
}

