#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Factorial is not defined for negative numbers
    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate factorial using a simple loop
        for (i = 1; i <= num; ++i) {
            factorial *= i; // Same as: factorial = factorial * i;
        }
        
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
