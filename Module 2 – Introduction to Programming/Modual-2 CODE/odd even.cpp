#include <stdio.h>

main() 
{
    int num, month;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("The number is Even.\n");
    } else {
        printf("The number is Odd.\n");
    }
}

