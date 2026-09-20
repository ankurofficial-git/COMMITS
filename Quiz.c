#include <stdio.h>

int main() {
    int score = 0;
    int answer = 0;

    printf("--- CAR QUIZ ---\n\n");

    // Question 1
    printf("1. Which company makes the Mustang?\n");
    printf("1. Ford\n");
    printf("2. Chevy\n");
    printf("Enter 1 or 2: ");
    scanf("%d", &answer);

    if (answer == 1) {
        printf("Correct!\n\n");
        score = score + 1;
    } else {
        printf("Wrong!\n\n");
    }

    // Question 2
    printf("2. What does 'V' stand for in a V8 engine?\n");
    printf("1. Velocity\n");
    printf("2. The shape of the engine\n");
    printf("Enter 1 or 2: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n\n");
        score = score + 1;
    } else {
        printf("Wrong!\n\n");
    }

    // Final Score
    printf("Game Over!\n");
    printf("Your total score is: %d\n", score);

    return 0;
}
