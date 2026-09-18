#include <stdio.h>

int main() {
    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age); // Read integer input from the user
    
    if (age > 18) {
        printf("he can drive\n");
    } else if (age < 18) {
        printf("he cant drive\n");
    } else {
        printf("he is exactly 18\n");
    }
    
    return 0;
}
