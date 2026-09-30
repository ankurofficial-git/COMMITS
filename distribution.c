#include <stdio.h>

int main() {
    int total_strength;
    int number_of_teachers = 49;
    int total_tablets;

    // Prompt user for the total school strength
    printf("Enter the total school strength (students + staff): ");
    scanf("%d", &total_strength);

    // Validate the input to ensure it covers at least the teachers
    if (total_strength < number_of_teachers) {
        printf("Error: Total strength cannot be less than the number of teachers (49).\n");
    } else {
        // Calculate total tablets needed
        total_tablets = total_strength;
        
        // Calculate number of students for display purposes
        int number_of_students = total_strength - number_of_teachers;

        // Display the results
        printf("\n--- Tablet Distribution Summary ---\n");
        printf("Teachers: %d\n", number_of_teachers);
        printf("Students: %d\n", number_of_students);
        printf("Total Tablets Needed: %d\n", total_tablets);
    }

    return 0;
}
