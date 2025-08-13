#include <stdio.h>

int main() 
{
    float num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);


    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // space before %c to handle newline
    switch(op) 
	{
        case '+':
            printf("Result = %f\n", num1 + num2);
            break;
        case '-':
            printf("Result = %f\n", num1 - num2);
            break;
        case '*':
            printf("Result = %f\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("Result = %f\n", num1 / num2);
            else
                printf("Error: Cannot divide by zero.\n");
            break;
        case '%':
            if((int)num2 != 0)
                printf("Result = %d\n", (int)num1 % (int)num2);
            else
                printf("Error: Cannot take modulus by zero.\n");
            break;
        default:
            printf("Invalid operator! Please enter +, -, *, /, or %% only.\n");
    }

    return 0;
}


