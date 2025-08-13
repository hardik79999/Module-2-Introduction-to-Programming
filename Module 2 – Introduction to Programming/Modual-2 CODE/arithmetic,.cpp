#include <stdio.h>

int main() {
    int num1, num2;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Arithmetic Operations
    printf("Addition: %d\n", num1 + num2);
    printf("Subtraction: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);
    printf("Division: %d\n", num1 / num2);
    printf("Division: Cannot divide by zero\n");
    printf("\n");

    // Relational Operations
    printf("Is num1 equal to num2? %d\n", num1 == num2);
    printf("Is num1 not equal to num2? %d\n", num1 != num2);
    printf("Is num1 greater than num2? %d\n", num1 > num2);
    printf("Is num1 less than num2? %d\n", num1 < num2);
    printf("\n");

    // Logical Operations
    printf("num1 > 0 AND num2 > 0: %d\n", (num1 > 0) && (num2 > 0));
    printf("num1 > 0 OR num2 > 0: %d\n", (num1 > 0) || (num2 > 0));
    printf("NOT (num1 > 0): %d\n", !(num1 > 0));

    return 0;
}

