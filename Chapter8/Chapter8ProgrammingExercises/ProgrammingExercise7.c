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
    char choice;
    double BASIC_PAY_RATE;

    printf("Enter the character corresponding to the desired pay rate or action:\n");
    printf("A) $8.75/hr\tB) $9.33/hr\tC) $10.00/hr\tD) $11.20/hr\tq) quit\n");
    while ((choice = getchar()) == '\n' || choice == ' ')
    {
        continue;
    }

    while (choice != 'q')
    {
        switch (choice)
        {
            case 'A':
                BASIC_PAY_RATE = BASIC_PAY_RATE1;
                break;
            case 'B':
                BASIC_PAY_RATE = BASIC_PAY_RATE2;
                break;
            case 'C':
                BASIC_PAY_RATE = BASIC_PAY_RATE3;
                break;
            case 'D':
                BASIC_PAY_RATE = BASIC_PAY_RATE4;
                break;
            default:
                printf("Invalid choice. Please enter a uppercase character between A and D.\n");
                goto end;
        }

        printf("Please enter the hours worked in a week: ");
        scanf("%lf", &hours);

        #pragma region my_first_region
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
        #pragma endregion
        // Calculate net pay
        netPay = grossPay - taxes;

        // Output results
        printf("The gross pay is: %lf\n", grossPay);
        printf("The taxes are: %lf\n", taxes);
        printf("The net pay is: %lf\n", netPay);

        printf("Enter the character corresponding to the desired pay rate or action:\n");
        printf("A) $8.75/hr\tB) $9.33/hr\tC) $10.00/hr\tD) $11.20/hr\tq) quit\n");
        
        while ((choice = getchar()) == '\n' || choice == ' ')
        {
            continue;
        }
    
    }



    printf("Program terminated.\n");

end:
    return 0;
}