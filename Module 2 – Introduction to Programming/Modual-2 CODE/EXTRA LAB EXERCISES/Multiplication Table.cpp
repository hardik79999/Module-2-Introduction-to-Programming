#include <stdio.h>

int main() 
{
    int num, range;

    // Take number input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Take range input
    printf("Enter range : ");
    scanf("%d", &range);

    // Print multiplication table
    printf("Multiplication Table of %d:\n", num);
    for (int i = 1; i <= range; i++) {
        printf("%d x %d  =  %d\n", num, i, num * i);
    }

    return 0;
}


