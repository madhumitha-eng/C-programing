#include <stdio.h>

int main() {
    float distance, fare, discount = 0, finalFare;

    printf("Enter Distance: ");
    scanf("%f", &distance);

    fare = distance * 12;

    if (distance > 100)
        discount = fare * 0.20;

    finalFare = fare - discount;

    printf("Fare = %.2f\n", fare);
    printf("Discount = %.2f\n", discount);
    printf("Final Fare = %.2f", finalFare);

    return 0;
}
