#include <stdio.h>

int main(void) {
    double balance = 1000000.0; // Initial amount in the account
    double interestRate = 0.08; // Annual interest rate
    double withdrawal = 100000.0; // Annual withdrawal
    int years = 0; // Number of years

    // Loop until the balance is zero or negative
    while (balance > 0) {
        // Calculate the interest earned for the year
        balance += balance * interestRate;
        
        // Make the annual withdrawal
        balance -= withdrawal;
        
        // Increment the year counter
        years++;
    }

    // Since the balance is not greater than zero when we exit the loop,
    // we need to account for the last year when the balance becomes zero or negative
    if (balance <= 0) {
        years++; // Include the year when the account is empty
    }

    printf("It takes %d years for Chuckie to empty his account.\n", years);

    return 0;
}