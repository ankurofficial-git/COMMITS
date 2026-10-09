#include <stdio.h>

// Acceleration due to gravity on Earth (meters per second squared)
#define GRAVITY 9.81

// Easy, beginner-friendly function to calculate depth
double calculate_depth(double seconds) {
    // Formula: 0.5 * g * t^2
    return 0.5 * GRAVITY * seconds * seconds;
}

int main() {
    double time_taken;
    double depth;

    printf("===================================\n");
    printf("     Hole Depth Calculator (C)     \n");
    printf("===================================\n");

    // 1. Ask the user for the time in seconds
    printf("Drop a stone into the hole.\n");
    printf("Enter the time (in seconds) until it hits the bottom: ");
    
    // 2. Read the input and check for basic errors
    if (scanf("%lf", &time_taken) != 1 || time_taken < 0) {
        printf("Error: Please enter a valid, positive number of seconds.\n");
        return 1; 
    }

    // 3. Call our easy function to get the depth
    depth = calculate_depth(time_taken);

    // 4. Print the result clearly
    printf("\n--- Results ---\n");
    printf("Estimated depth of the hole: %.2f meters\n", depth);
    printf("===================================\n");

    return 0;
}
