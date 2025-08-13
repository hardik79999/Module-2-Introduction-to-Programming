#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int number, guess, tries = 0;

    srand(time(0)); // Random number seed
    number = rand() % 100 + 1; // 1 se 100 ke beech number

    printf("1 se 100 ke beech number guess karo.\n");

    while (tries < 7) 
	{
        printf("Apni guess do: ");
        scanf("%d", &guess);
        tries++;

        if (guess == number) 
		{
            printf("Sahi guess! Tumne %d tries me laga liya.\n", tries);
            break;
        }
        else if (guess < number) 
		{
            printf("Thoda bada socho.\n");
        }
        else {
            printf("Thoda chhota socho.\n");
        }
    }

    if (tries == 7 && guess != number)
        printf("Koshish khatam! Number tha %d.\n", number);

    return 0;
}

