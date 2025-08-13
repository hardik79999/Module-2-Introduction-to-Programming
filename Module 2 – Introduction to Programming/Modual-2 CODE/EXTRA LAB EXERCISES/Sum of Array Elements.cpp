#include <stdio.h>

int main() 
{
    int n, i,num;
    float sum = 0, avg;

    printf("Enter how many numbers you want to input: ");
    scanf("%d", &num);

    float arr[n];

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) 
	{
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / num;

    printf("Sum = %f\n", sum);
    printf("Average = %f\n", avg);

    return 0;
}


