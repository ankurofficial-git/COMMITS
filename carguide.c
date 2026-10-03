#include <stdio.h>

int main() {
    long long budget; // Using 'long long' to handle large Crore amounts safely

    printf("Welcome to the Indian Car Selector!\n");
    printf("Please enter your maximum budget in Rupees (e.g., 1500000 for 15 Lakhs): ");
    scanf("%lld", &budget);

    // Check if the budget exceeds the maximum allowed limit of 2.5 Crore
    if (budget > 25000000) {
        printf("\nError: Your budget exceeds the maximum limit of Rs. 2.5 Crore.\n");
    }
    else if (budget < 600000) {
        printf("\nRecommendation: A Budget Hatchback (like a Maruti Suzuki Alto or WagonR).\n");
        printf("Features: Highly affordable, excellent mileage, and perfect for city traffic.\n");
    }
    else if (budget < 1500000) {
        printf("\nRecommendation: A Compact SUV or Premium Hatchback (like a Tata Nexon or Hyundai i20).\n");
        printf("Features: Great safety ratings, modern infotainment features, and daily comfort.\n");
    }
    else if (budget < 4000000) {
        printf("\nRecommendation: A Full-Size SUV or Executive Sedan (like a Toyota Fortuner or Hyundai Ioniq 5).\n");
        printf("Features: Powerful engine, massive road presence, and premium features.\n");
    }
    else {
        printf("\nRecommendation: A Luxury Premium Car (like a Mercedes-Benz E-Class or BMW X5).\n");
        printf("Features: Top-tier luxury, high performance, advanced safety, and maximum prestige.\n");
    }

    printf("\nThank you for using the Car Selector program!\n");

    return 0;
}
