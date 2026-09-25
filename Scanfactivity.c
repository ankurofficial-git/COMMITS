#include <stdio.h>

int main() {
    int age;

    // Prompt the user for their age
    printf("Enter your age: ");
    
    // Read the integer input from the user
    if (scanf("%d", &age) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    // Check if the student is above 20
    if (age > 20) {
        printf("Eligible: You are above 20 and can participate in the school activity!\n");
    } else {
        printf("Not eligible: You must be above 20 to participate.\n");
    }

    return 0;
}
