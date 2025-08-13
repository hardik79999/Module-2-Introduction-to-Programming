#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // Input with spaces

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch; // Convert to lowercase
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (ch >= '0' && ch <= '9')
            digits++;
        else if (ch != ' ')
            special++;
    }

    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpecial Characters: %d\n", vowels, consonants, digits, special);

    return 0;
}

