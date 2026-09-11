#include <stdio.h>

int main() {
    int firstNumber;
    int secondNumber;
    int totalSum;
   

    printf("Enter the first number: ");
    scanf("%d", &firstNumber);

    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    // Adding the two numbers together
    totalSum = firstNumber + secondNumber;

    printf("The sum of %d and %d is: %d\n", firstNumber, secondNumber, totalSum);

    return 0;
}

