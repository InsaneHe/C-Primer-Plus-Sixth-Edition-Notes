#include <stdio.h>
#include <string.h>
#include <ctype.h>

int read_float(char input[256], float *num);
void clear_input_buffer(void);

int main(void)
{
    char choice;
    char input[256];
    float i, j;

    printf("Enter the operation of your choice:\n");
    printf("a. add\ts. subtract\nm. multiply\td. divide\nq. quit\n");

    while ((choice = getchar()) == '\n' || choice == ' ')
        continue;

    while (choice != 'q')
    {
        clear_input_buffer();

        switch (choice)
        {
            case 'a':
                printf("Enter first number: ");
                while (!read_float(input, &i))
                    ;

                printf("Enter second number: ");
                while (!read_float(input, &j))
                    ;

                printf("%f + %f = %f\n", i, j, i + j);
                break;

            case 's':
                printf("Enter first number: ");
                while (!read_float(input, &i))
                    ;

                printf("Enter second number: ");
                while (!read_float(input, &j))
                    ;

                printf("%f - %f = %f\n", i, j, i - j);
                break;

            case 'm':
                printf("Enter first number: ");
                while (!read_float(input, &i))
                    ;

                printf("Enter second number: ");
                while (!read_float(input, &j))
                    ;

                printf("%f * %f = %f\n", i, j, i * j);
                break;

            case 'd':
                printf("Enter first number: ");
                while (!read_float(input, &i))
                    ;

                printf("Enter second number: ");
                while (!read_float(input, &j) || j == 0)
                {
                    if (j == 0)
                        printf("Enter a number other than 0: ");
                }

                printf("%f / %f = %f\n", i, j, i / j);
                break;

            default:
                printf("Invalid choice. Please enter a valid operation.\n");
                break;
        }

        printf("Enter the operation of your choice:\n");
        while ((choice = getchar()) == '\n' || choice == ' ')
            continue;
    }

    printf("Bye!\n");

    return 0;
}

void clear_input_buffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int read_float(char input[256], float *num)
{
    if (fgets(input, 256, stdin) == NULL)
    {
        printf("Error reading input.\n");
        return 0;
    }

    input[strcspn(input, "\n")] = '\0';

    if (sscanf(input, "%f", num) == 1)
        return 1;

    printf("%s is not an number.\nPlease enter a number, such as 2.5, -1.78E8, or 3: ", input);
    return 0;
}