#include <stdio.h>

// Recursive function to get Nth Fibonacci number
int fibonacciRecursive(int n) 
{
    if (n <= 1)
        return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

// Iterative function to get Nth Fibonacci number
int fibonacciIterative(int n) 
{
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++) 
	{
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() 
{
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("\nFibonacci sequence using recursion:\n");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", fibonacciRecursive(i));
    }

    printf("\n\n%dth Fibonacci (Recursive): %d", n, fibonacciRecursive(n - 1));
    printf("\n%dth Fibonacci (Iterative): %d", n, fibonacciIterative(n - 1));

    return 0;
}

