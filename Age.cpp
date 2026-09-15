#include <stdio.h>

int main() {
    // 1. Make a variable to hold the number
    int age = 0;

    // 2. Ask the user to type something
    printf("Enter your age: ");

    // 3. Get the number using scanf
    scanf("%d", &age);

    // 4. Show the number back on the screen
    printf("You are %d years old!\n", age);

    return 0;
}

