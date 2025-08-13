#include <stdio.h>

int main() {
    int marks;

    printf("Enter student marks (0-100): ");
    scanf("%d", &marks);

    if (marks > 90) 
	{
        printf("Grade: A\n");
    } 
	else if (marks > 75 && marks <= 90) 
	{
        printf("Grade: B\n");
    } 
	else if (marks > 50 && marks <= 75) 
	{
        printf("Grade: C\n");
    } 
	else if (marks <= 50) 
	{
        printf("Grade: D\n");
    } 
	else 
	{
        printf("Invalid input. Please enter marks between 0 and 100.\n");
    }

    return 0;
}

