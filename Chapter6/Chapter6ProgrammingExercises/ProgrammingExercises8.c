#include <stdio.h>

int main(void) {
    double num1, num2, difference, product;

    while (1) {
        printf("Please enter two floating-point numbers (or non-numeric input to exit): ");
        
        // Read the first number
        if (scanf("%lf", &num1) != 1)
        {
            printf("Invalid input. Exiting.\n");
            return 1;
        }

        // Clear the input buffer to discard the rest of the input
        while (getchar() != '\n');

        // Read the second number
        if (scanf("%lf", &num2) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }

        // Calculate the difference and product
        difference = num1 - num2;
        product = num1 * num2;

        // Check for division by zero
        if (product == 0)
        {
            printf("The product of the two numbers is zero, cannot divide by zero.\n");
        }
        else
        {
            // Print the result
            printf("The value of their difference divided by their product is: %lf\n", difference / product);
        }
    }

    return 0;
}