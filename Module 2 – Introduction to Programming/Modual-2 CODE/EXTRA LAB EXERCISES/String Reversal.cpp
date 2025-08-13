#include <stdio.h>

void reverse(char s[]) 
{
    int i = 0, j;
    while (s[i]) i++;  // Length count
    for (j = 0, i--; j < i; j++, i--) 
	{
        char t = s[j];
        s[j] = s[i];
        s[i] = t;
    }
}

int main() 
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Take full line input
    reverse(str);
    printf("Reversed: %s\n", str);
    return 0;
}
