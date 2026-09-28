#include <stdio.h>

int main() {
    int n, remainder, result = 0, multiplier = 1;
    
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    
    while (n > 0) {
        remainder = n % 2;
        result = result + (remainder * multiplier);
        multiplier = multiplier * 10;
        n = n / 2;
    }
    
    printf("Binary number: %d\n", result);
    return 0;
}
