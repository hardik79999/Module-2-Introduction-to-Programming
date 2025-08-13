#include <stdio.h>

int main() 
{
    int num, digit, sum = 0, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; // Store original number for display

    while (num != 0) 
	{
        digit = num % 10;        // Get last digit
        sum += digit;            // Add to sum
        reverse = reverse * 10 + digit; // Build reverse
        num /= 10;               // Remove last digit
    }

    printf("Sum of digits of %d = %d\n", original, sum);
    printf("Reversed number = %d\n", reverse);

    return 0;
}


