#include <stdio.h>

int main() 
{
    FILE *fptr;
    char str[100];

    // Write to file
    fptr = fopen("example.txt", "w"); // open in write mode
    if (fptr == NULL) 
	{
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter a string to write into file: ");
    fgets(str, sizeof(str), stdin);
    fputs(str, fptr);
    fclose(fptr);
    printf("Data written and file closed.\n");

    // Read from file
    fptr = fopen("example.txt", "r"); // open in read mode
    if (fptr == NULL) 
	{
        printf("Error opening file!\n");
        return 1;
    }

    printf("Reading from file:\n");
    while (fgets(str, sizeof(str), fptr) != NULL) 
	{
        printf("%s", str);
    }

    fclose(fptr);
    return 0;
}


