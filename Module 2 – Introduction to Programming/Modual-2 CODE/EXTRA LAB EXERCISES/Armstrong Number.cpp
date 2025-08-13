#include <stdio.h>

int isArmstrong(int num) {
    int original = num, sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    return (sum == original);
}

int main() {
    int num;

    // Check ek number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    // 1 se 1000 tak ke Armstrong numbers
    printf("Armstrong numbers from 1 to 1000:\n");
    for (int i = 1; i <= 1000; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }

    return 0;
}

