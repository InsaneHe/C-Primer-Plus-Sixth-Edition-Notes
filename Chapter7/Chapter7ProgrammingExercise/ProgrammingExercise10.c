#include <stdio.h>

#define TAXRATE1 0.15  // the tax rate for the first part
#define TAXRATE2 0.28  // the tax rate for the rest

int main(void)
{
    double tax, taxable_income;
    int choice;

    printf("Please specify the tax category:\n");
    printf("1) Single\t2) Head of Household\t3) Married, Joint\t4) Married, Separate\t5) quit\n");
    scanf("%d", &choice);
    printf("Please enter your taxable income:\n");
    scanf("%lf", &taxable_income);

    while (choice != 5)
    {
        switch (choice)
        {
            case 1:
                if (taxable_income <= 17850.00)
                {
                    tax = taxable_income * TAXRATE1;
                }
                else
                {
                    tax = 17850.00 * TAXRATE1 + (taxable_income - 17850.00) * TAXRATE2;
                }
                break;
            case 2:
                if (taxable_income <= 23900.00)
                {
                    tax = taxable_income * TAXRATE1;
                }
                else
                {
                    tax = 23900.00 * TAXRATE1 + (taxable_income - 23900.00) * TAXRATE2;
                }
                break;
            case 3:
                if (taxable_income <= 29750.00)
                {
                    tax = taxable_income * TAXRATE1;
                }
                else
                {
                    tax = 29750.00 * TAXRATE1 + (taxable_income - 29750.00) * TAXRATE2;
                }
                break;
            case 4:
                if (taxable_income <= 14875.00)
                {
                    tax = taxable_income * TAXRATE1;
                }
                else
                {
                    tax = 14875.00 * TAXRATE1 + (taxable_income - 14875.00) * TAXRATE2;
                }
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
                choice = 0; // Reset choice to force re-prompt
                break;
        }

        // Output results
        printf("The taxes are: %lf\n", tax);

        // Re-prompt for new input
        printf("Please specify the tax category:\n");
        printf("1) Single\t2) Head of Household\t3) Married, Joint\t4) Married, Separate\t5) quit\n");
        scanf("%d", &choice);
    }

    printf("Program terminated.\n");

    return 0;
}