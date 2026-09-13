#include <stdio.h>

int main(void) {
    int num1, num2;
    int sum, subtract, multiply;
    float divide;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    subtract = num1 - num2;
    multiply = num1 * num2;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", subtract);
    printf("Multiplication = %d\n", multiply);

    if (num2 != 0) {
        divide = (float)num1 / num2;
        printf("Division = %.2f\n", divide);
    } else {
        printf("Division is undefined (cannot divide by zero).\n");
    }

    return 0;
}
