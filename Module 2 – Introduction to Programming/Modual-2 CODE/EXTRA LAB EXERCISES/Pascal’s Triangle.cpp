#include <stdio.h>

int combination(int n, int r) {
    if (r == 0 || r == n)
        return 1;
    return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", combination(i, j));
        }
        printf("\n");
    }

    return 0;
}

