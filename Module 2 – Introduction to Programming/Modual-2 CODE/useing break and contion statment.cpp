#include <stdio.h>

int main() {
    int i;

    // Using break to stop at 5
    printf("Using break:\n");
    for (i = 1; i <= 10; i++) 
	{
        if (i == 5) 
		{
            break; // Stop the loop 5
        }
        printf("%d ", i);
    }

    printf("\n\nUsing continue:\n");
    
    
    // Using continue to skip 3
    for (i = 1; i <= 5; i++) 
	{
        if (i == 3) 
		{
            continue; // Skip print 3
        }
        printf("%d ", i);
    }

    return 0;
}

