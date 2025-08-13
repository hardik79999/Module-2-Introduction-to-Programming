#include <stdio.h>

int main() 
{
    int num, i, isPrime;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if num is prime
    if (num <= 1) 
	{
        printf("%d is not a prime number.\n", num);
    } 
	else 
	{
        isPrime = 1;
        for (i = 2; i <= num / 2; i++) 
		{
            if (num % i == 0) 
			{
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d is a prime number.\n", num);
        else
            printf("%d is not a prime number.\n", num);
    }

    // Challenge: Print all prime numbers from 1 to num
    printf("Prime numbers between 1 and %d are:\n", num);
    for (int j = 2; j <= num; j++) 
	{
        isPrime = 1;
        for (i = 2; i <= j / 2; i++) 
		{
            if (j % i == 0) 
			{
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", j);
    }

    return 0;
}


