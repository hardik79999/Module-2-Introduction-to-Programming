#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove newline

    strcat(str1, str2);  // Concatenate strings

    printf("Concatenated String: %s\n", str1);
    printf("Length of Concatenated String: %lu\n", strlen(str1));

    return 0;
}

