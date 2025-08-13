#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50] = "";
    int i = 0, j = 0, maxLen = 0, count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            if (j > 0) {
                word[j] = '\0';
                count++;
                if (j > maxLen) {
                    maxLen = j;
                    strcpy(longest, word);
                }
                j = 0;
            }
        }
        i++;
    }

    // For last word if no space after it
    if (j > 0) {
        word[j] = '\0';
        count++;
        if (j > maxLen) strcpy(longest, word);
    }

    printf("Total words: %d\n", count);
    printf("Longest word: %s\n", longest);

    return 0;
}

