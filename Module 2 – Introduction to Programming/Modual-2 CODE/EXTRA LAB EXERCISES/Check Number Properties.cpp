#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Even or Odd
    if (num % 2 == 0)
        printf("The number is Even.\n");
    else
        printf("The number is Odd.\n");

    // Positive, Negative or Zero
    if (num > 0)
        printf("The number is Positive.\n");
    else if (num < 0)
        printf("The number is Negative.\n");
    else
        printf("The number is Zero.\n");

    // Multiple of both 3 and 5
    if (num % 3 == 0 && num % 5 == 0)
        printf("The number is a multiple of both 3 and 5.\n");
    else
        printf("The number is NOT a multiple of both 3 and 5.\n");

    return 0;
}

