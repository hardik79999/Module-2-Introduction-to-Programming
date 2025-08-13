#include <stdio.h>
int factorial(int n);

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Function
    int result = factorial(num);

    printf("Factorial of %d is %d\n", num, result);
    return 0;
}

// Function Definition
int factorial(int n) 
{
    int fact = 1;
    for(int i = 1; i <= n; i++) 
	{
        fact *= i;
    }
    return fact;
}

