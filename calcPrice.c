#include <stdio.h>

int main() {
    // this declares variables to hold user input and calculated values
    int itemNumber, quantity;
    float unitPrice, totalAmount;
    char purchaseDate[11]; // this holds 11 characters to hold mm/dd/yyyy format

    // this prompts the user to enter item information and read the input
    printf("Enter item number:");
    scanf("%d", &itemNumber);

    printf("Enter unit price:");
    scanf("%f", &unitPrice);

    printf("Enter quantity:");
    scanf("%d", &quantity);

    printf("Enter purchase date (mm/dd/yyyy):");
    scanf("%s", purchaseDate);

    // this calculates total amount of purchase
    totalAmount = unitPrice * quantity;

    // this displays formatted output of the product information entered by the user
    printf("\nItem\tUnit\tPrice\tQTY\tPurchase Date\tTotal Amount\n");
    printf("%d\t$%.2f\t%d\t%s\t$%.2f\n", itemNumber, unitPrice, quantity, purchaseDate, totalAmount);

    return 0; // this indicates successful program execution
}
