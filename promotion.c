#include <stdio.h>

int main() {
    float percentage;

    // Ask the user to enter the student's percentage
    printf("Enter the student's final exam percentage: ");
    scanf("%f", &percentage);

    // Check if the percentage is 60 or higher
    if (percentage >= 60.0) {
        printf("True: The student is PROMOTED.\n");
    } else {
        printf("False: The student FAILS.\n");
    }

    return 0;
}
