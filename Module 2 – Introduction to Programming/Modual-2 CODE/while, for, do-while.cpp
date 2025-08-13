#include <stdio.h>

int main() {
    int i;

    // Using while loop
    i = 1;
    printf("While loop:\n");
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }

    // Using for loop
    printf("\n\nFor loop:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    // Using do-while loop
    i = 1;
    printf("\n\nDo-while loop:\n");
    do {
        printf("%d ", i);
        i++;
    } while (i <= 10);

    return 0;
}

