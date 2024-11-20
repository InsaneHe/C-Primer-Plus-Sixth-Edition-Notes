#include <stdio.h>
#define BASIC_PAY_RATE 10  // Basic pay rate for the first 40 hours
#define OVERTIME_PAY_RATE 15  // Overtime (in excess of 40 hours)
#define TAXRATE1 0.15  // the tax rate for the first $300
#define TAXRATE2 0.20  // the tax rate for the next $150
#define TAXRATE3 0.25  // the tax rate for the rest

int main(void)
{
    double hours, grossPay, taxes, netPay;

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

    return 0;
}