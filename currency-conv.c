#include <stdio.h>

// Function to display available currencies
void displayCurrencies() {
    printf("Available currencies:\n");
    printf("1. USD (US Dollar)\n");
    printf("2. EUR (Euro)\n");
    printf("3. GBP (British Pound)\n");
    printf("4. INR (Indian Rupee)\n");
    printf("5. JPY (Japanese Yen)\n");
    printf("6. AUD (Australian Dollar)\n");
}

// Function to get exchange rate
float getExchangeRate(int fromCurrency, int toCurrency) {
    // Exchange rates from USD to other currencies (example rates)
    float exchangeRates[6][6] = {
        {1.0, 0.85, 0.75, 82.0, 110.0, 1.4},  // From USD
        {1.18, 1.0, 0.88, 96.0, 129.4, 1.65}, // From EUR
        {1.34, 1.14, 1.0, 109.0, 147.0, 1.87}, // From GBP
        {0.012, 0.010, 0.0092, 1.0, 1.35, 0.017}, // From INR
        {0.0091, 0.0077, 0.0068, 0.74, 1.0, 0.0127}, // From JPY
        {0.71, 0.61, 0.54, 59.0, 79.0, 1.0}   // From AUD
    };

    return exchangeRates[fromCurrency - 1][toCurrency - 1];
}

int main() {
    int fromCurrency, toCurrency;
    float amount, convertedAmount;

    printf("Welcome to the Currency Converter!\n\n");

    // Display available currencies
    displayCurrencies();

    // Input the source currency
    printf("\nEnter the number corresponding to the currency you want to convert from: ");
    scanf("%d", &fromCurrency);

    // Input the target currency
    printf("Enter the number corresponding to the currency you want to convert to: ");
    scanf("%d", &toCurrency);

    // Input the amount to convert
    printf("Enter the amount to convert: ");
    scanf("%f", &amount);

    // Get the exchange rate and calculate the converted amount
    float exchangeRate = getExchangeRate(fromCurrency, toCurrency);
    convertedAmount = amount * exchangeRate;

    // Display the result
    printf("\nConverted Amount: %.2f\n", convertedAmount);

    return 0;
}

