#include <stdio.h>

int main() {
    int choice;

    // Ask the user for input
    printf("Enter 1 for Yes or 0 for No: ");
    scanf("%d", &choice);

    // Check the input and print the result
    if (choice == 1) {
        printf("You said YES.\n");
    } else if (choice == 0) {
        printf("You said NO.\n");
    } else {
        printf("Invalid input! Please enter only 1 or 0.\n");
    }

    return 0;
}

