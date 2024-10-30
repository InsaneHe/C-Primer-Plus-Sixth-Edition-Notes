#include <stdio.h>
#include <math.h>

double calculateDifferenceDividedByProduct(double num1, double num2);

int main(void)
{
    double num1, num2, result;

    while (1)
    {
        printf("Please enter two floating-point numbers (or non-numeric input to exit): ");
        
        // Read the first number
        if (scanf("%lf", &num1) != 1)
        {
            break; // Exit the loop if input is not a number
        }

        // Clear the input buffer to discard the rest of the input
        while (getchar() != '\n');

        // Read the second number
        if (scanf("%lf", &num2) != 1)
        {
            break; // Exit the loop if input is not a number
        }

        // Calculate the result using the function
        result = calculateDifferenceDividedByProduct(num1, num2);

        // Check if the result is valid (i.e., not due to division by zero)
        if (isnan(result))
        {
            printf("The product of the two numbers is zero, cannot divide by zero.\n");
        } else {
            // Print the result
            printf("The value of their difference divided by their product is: %lf\n", result);
        }
    }

    printf("Program terminated.\n");
    return 0;
}

double calculateDifferenceDividedByProduct(double num1, double num2)
{
    double difference = num1 - num2;
    double product = num1 * num2;

    // Check for division by zero before performing the division
    if (product != 0)
    {
        return difference / product;
    }
}