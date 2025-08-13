#include <stdio.h>
#include <string.h>

// Function to check if a number is a palindrome
int isNumberPalindrome(int num) {
    int rev = 0, temp = num;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return (rev == temp);
}

// Function to check if a string is a palindrome
int isStringPalindrome(char str[]) {
    int i, len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i])
            return 0;
    }
    return 1;
}

int main() {
    int number;
    char text[100];

    // Input for number palindrome
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isNumberPalindrome(number))
        printf("Number is Palindrome\n");
    else
        printf("Number is Not Palindrome\n");

    // Input for string palindrome
    printf("Enter a word: ");
    scanf("%s", text);
    if (isStringPalindrome(text))
        printf("Word is Palindrome\n");
    else
        printf("Word is Not Palindrome\n");

    return 0;
}

