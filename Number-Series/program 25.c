#include <stdio.h>

int main() {
    float income, tax, netincome;

    printf("Enter Income: ");
    scanf("%f", &income);

    if (income <= 250000)
        tax = 0;
    else if (income <= 500000)
        tax = income * 0.05;
    else
        tax = income * 0.20;

    netincome = income - tax;

    printf("Tax = %.2f\n", tax);
    printf("Net Income = %.2f", netincome);

    return 0;
}
