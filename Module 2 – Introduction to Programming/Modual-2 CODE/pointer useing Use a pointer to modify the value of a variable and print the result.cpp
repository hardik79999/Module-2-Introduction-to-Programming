#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;

    ptr = &num;  

    printf("Before change: num = %d\n", num);

    *ptr = 20;  

    printf("After change: num = %d\n", num);

    return 0;
}

