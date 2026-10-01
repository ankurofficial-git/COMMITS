#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int result;

    // Use the current time to get a new random number every time the program runs
    srand(time(0));

    // Generate either 0 or 1
    result = rand() % 2;

    // Check the result and print Heads or Tails
    if (result == 0) {
        printf("Result: Heads\n");
    } else {
        printf("Result: Tails\n");
    }

    return 0;
}
