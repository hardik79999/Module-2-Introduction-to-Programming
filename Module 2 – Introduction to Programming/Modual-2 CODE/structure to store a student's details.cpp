#include <stdio.h>

// Define structure
struct Student 
{
    char name[50];
    int roll;
    float marks;
};

int main() 
{
    struct Student s[3];
    int i;

    // Input data for 3 students
    for(i = 0; i < 3; i++) 
	{
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Print data
    printf("\nStudent Details:\n");
    for(i = 0; i < 3; i++) 
	{
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Marks: %f\n", s[i].marks);
    }

    return 0;
}

