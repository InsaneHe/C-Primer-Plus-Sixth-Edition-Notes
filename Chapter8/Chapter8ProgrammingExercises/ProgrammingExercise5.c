#include <stdio.h>

int main(void)
{
    int guess = 50;
    int low = 1, high = 100;
    char response;

    printf("Pick an integer from 1 to 100. I will try to guess it.\n");
    printf("Respond with 'y' if my guess is right and with 'n' if it is wrong.\n");
    printf("Uh... is your number %d?\n", guess);

    while (1)
    {
        response = getchar();

        while (response != 'y' && response != 'n')
        {
            printf("Invalid input. Please enter 'y' or 'n':\n");
            response = getchar();
        }

        if (response == 'y')
        {
            printf("I knew I could do it!\n");
            break;
        }

        printf("Is my guess bigger than yours or smaller than yours? (b/s)\n");
        response = getchar();

        while (response != 'b' && response != 's')
        {
            printf("Invalid input. Please enter 'b' or 's':\n");
            response = getchar();
        }

        if (response == 'b')
        {
            high = guess;
        }
        else if (response == 's')
        {
            low = guess;
        }

        guess = (low + high) / 2;
        printf("Uh... is your number %d?\n", guess);
    }

    return 0;
}