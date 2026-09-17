#include <stdio.h>

int main() {
    // 1. Set your values directly here
    int num1 = 20;
    int num2 = 5;
    
    // 2. Create variables to hold the answers
    int sum, difference, product, quotient;

    // 3. Do the math
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    // 4. Print the answers to the screen
    printf("Addition: %d\n", sum);
    printf("Subtraction: %d\n", difference);
    printf("Multiplication: %d\n", product);
    printf("Division: %d\n", quotient);

    return 0;
}

