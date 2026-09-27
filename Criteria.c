#include <stdio.h>

int main() {
    float percentage;

    // Ask the user to enter their Class 12th percentage
    printf("Enter your Class 12th percentage: ");
    scanf("%f", &percentage);

    // Check the admission criteria (50%)
    if (percentage >= 50.0) {
        printf("Admission Status: YES (Eligible)\n");
    } else {
        printf("Admission Status: NO (Not Eligible)\n");
    }

    // Keeps the VS Code terminal open until you press Enter
    printf("\nPress Enter to exit...");
    fflush(stdin); 
    getchar(); 

    return 0;
}
