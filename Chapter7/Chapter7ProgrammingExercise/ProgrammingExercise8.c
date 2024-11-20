#include <stdio.h>

#define BASIC_PAY_RATE1 8.75  // Basic pay rate1 for the first 40 hours
#define BASIC_PAY_RATE2 9.33  // Basic pay rate2 for the first 40 hours
#define BASIC_PAY_RATE3 10.00  // Basic pay rate3 for the first 40 hours
#define BASIC_PAY_RATE4 11.20  // Basic pay rate4 for the first 40 hours
#define OVERTIME_PAY_RATE 15  // Overtime (in excess of 40 hours)
#define TAXRATE1 0.15  // the tax rate for the first $300
#define TAXRATE2 0.20  // the tax rate for the next $150
#define TAXRATE3 0.25  // the tax rate for the rest

int main(void)
{
    double hours, grossPay, taxes, netPay;
    int choice;
    double BASIC_PAY_RATE;

    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr\t2) $9.33/hr\t3) $10.00/hr\t4) $11.20/hr\t5) quit\n");
    scanf("%d", &choice);

    while (choice != 5)
    {
        switch (choice)
        {
            case 1:
                BASIC_PAY_RATE = BASIC_PAY_RATE1;
                break;
            case 2:
                BASIC_PAY_RATE = BASIC_PAY_RATE2;
                break;
            case 3:
                BASIC_PAY_RATE = BASIC_PAY_RATE3;
                break;
            case 4:
                BASIC_PAY_RATE = BASIC_PAY_RATE4;
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
                goto end;
        }

        printf("Please enter the hours worked in a week: ");
        scanf("%lf", &hours);

        // Calculate gross pay
        if (hours <= 40)
        {
            grossPay = hours * BASIC_PAY_RATE;
        }
        else
        {
            grossPay = 40 * BASIC_PAY_RATE + (hours - 40) * OVERTIME_PAY_RATE;
        }

        // Calculate taxes
        if (grossPay <= 300)
        {
            taxes = grossPay * TAXRATE1;
        }
        else if (grossPay <= 450)
        {
            taxes = 300 * TAXRATE1 + (grossPay - 300) * TAXRATE2;
        }
        else
        {
            taxes = 300 * TAXRATE1 + 150 * TAXRATE2 + (grossPay - 450) * TAXRATE3;
        }

        // Calculate net pay
        netPay = grossPay - taxes;

        // Output results
        printf("The gross pay is: %lf\n", grossPay);
        printf("The taxes are: %lf\n", taxes);
        printf("The net pay is: %lf\n", netPay);

        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1) $8.75/hr\t2) $9.33/hr\t3) $10.00/hr\t4) $11.20/hr\t5) quit\n");
        scanf("%d", &choice);
    }

    printf("Program terminated.\n");

end:
    return 0;
}