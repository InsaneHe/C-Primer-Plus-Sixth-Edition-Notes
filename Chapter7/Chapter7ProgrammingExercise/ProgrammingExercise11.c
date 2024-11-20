#include <stdio.h>

#define ARTICHOKE_PRICE 2.05
#define BEET_PRICE 1.15
#define CARROT_PRICE 1.09
#define DISCOUNT_THRESHOLD 100
#define SHIPPING_UNDER_5 6.50
#define SHIPPING_5_TO_20 14.00
#define SHIPPING_OVER_20 14.00

double calculate_total(double pounds, double price_per_pound)
{
    return pounds * price_per_pound;
}

double calculate_discount(double total)
{
    if (total >= DISCOUNT_THRESHOLD)
    {
        return total * 0.05;
    }
    return 0;
}

double calculate_shipping(double total_weight)
{
    if (total_weight <= 5)
    {
        return SHIPPING_UNDER_5;
    }
    else if (total_weight < 20)
    {
        return SHIPPING_5_TO_20;
    }
    else
    {
        return SHIPPING_OVER_20 + (total_weight - 20) * 0.50;
    }
}

void print_purchase_info(double artichoke_pounds, double beet_pounds, double carrot_pounds, double total_cost, double discount, double shipping, double grand_total) {
    printf("\nPurchase Information:\n");
    printf("Artichokes: $%.2f per pound, %.2f pounds, Total: $%.2f\n", ARTICHOKE_PRICE, artichoke_pounds, calculate_total(artichoke_pounds, ARTICHOKE_PRICE));
    printf("Beets: $%.2f per pound, %.2f pounds, Total: $%.2f\n", BEET_PRICE, beet_pounds, calculate_total(beet_pounds, BEET_PRICE));
    printf("Carrots: $%.2f per pound, %.2f pounds, Total: $%.2f\n", CARROT_PRICE, carrot_pounds, calculate_total(carrot_pounds, CARROT_PRICE));
    printf("Total cost of the order: $%.2f\n", total_cost);
    printf("Discount: $%.2f\n", discount);
    printf("Shipping charge: $%.2f\n", shipping);
    printf("Grand total of all charges: $%.2f\n", grand_total);
}

int main() {
    char choice;
    double artichoke_pounds = 0, beet_pounds = 0, carrot_pounds = 0;
    double total_cost = 0, total_weight = 0, discount, shipping, grand_total;

    while (1)
    {
        printf("Enter 'a' for artichokes, 'b' for beets, 'c' for carrots, or 'q' to quit: ");
        scanf(" %c", &choice);

        switch (choice)
        {
            case 'a':
                printf("Enter the pounds of artichokes desired: ");
                scanf("%lf", &artichoke_pounds);
                total_cost += calculate_total(artichoke_pounds, ARTICHOKE_PRICE);
                total_weight += artichoke_pounds;
                break;
            case 'b':
                printf("Enter the pounds of beets desired: ");
                scanf("%lf", &beet_pounds);
                total_cost += calculate_total(beet_pounds, BEET_PRICE);
                total_weight += beet_pounds;
                break;
            case 'c':
                printf("Enter the pounds of carrots desired: ");
                scanf("%lf", &carrot_pounds);
                total_cost += calculate_total(carrot_pounds, CARROT_PRICE);
                total_weight += carrot_pounds;
                break;
            case 'q':
                discount = calculate_discount(total_cost);
                shipping = calculate_shipping(total_weight);
                grand_total = total_cost - discount + shipping;
                print_purchase_info(artichoke_pounds, beet_pounds, carrot_pounds, total_cost, discount, shipping, grand_total);
                return 0;
            default:
                printf("Invalid input, please try again.\n");
        }
    }
    return 0;
}