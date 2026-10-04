#include <stdio.h>

int main() {
    float base_hp, target_hp, boost_needed;
    float atmospheric_pressure = 14.7; // Standard atmospheric pressure in PSI

    printf("--- Turbo Boost Pressure Calculator ---\n\n");

    // Get user input for base horsepower
    printf("Enter the engine's base horsepower (without turbo): ");
    scanf("%f", &base_hp);

    // Get user input for target horsepower
    printf("Enter your target horsepower: ");
    scanf("%f", &target_hp);

    // Check to prevent division by zero or unrealistic inputs
    if (base_hp <= 0 || target_hp <= base_hp) {
        printf("\nError: Target HP must be greater than Base HP, and Base HP must be greater than 0.\n");
    } else {
        // Calculate the required boost pressure in PSI
        boost_needed = ((target_hp / base_hp) - 1.0) * atmospheric_pressure;

        // Display the result
        printf("\nTo reach %.1f HP from a %.1f HP engine:\n", target_hp, base_hp);
        printf("You need approximately %.2f PSI of boost pressure.\n", boost_needed);
        printf("\nNote: This is a mathematical estimate. Real-world builds must account for drivetrain loss, intercooler efficiency, and tuning.\n");
    }

    return 0;
}
