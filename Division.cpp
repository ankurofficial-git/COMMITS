#include <stdio.h>

int main() {
    int num1 = 20;
    int num2 = 3;
    
    // Check for division by zero
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }
    
    // Perform division (quotient)
    int quotient = num1 / num2;
    
    // Perform modulo (remainder)
    int remainder = num1 % num2;
    
    printf("Division: %d / %d = %d\n", num1, num2, quotient);
    printf("Modulo (Remainder): %d %% %d = %d\n", num1, num2, remainder);
    
    return 0;
}

