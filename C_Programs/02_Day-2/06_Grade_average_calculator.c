#include <stdio.h>

int main() {
    
        // Welcome User
        printf("Welcome to the Grade average calculator!\n");

        // Declare variables
        int grade1, grade2, grade3;
        double average;

        // Get User input
        printf("Enter the first grade: ");
        scanf("%d", &grade1);

        printf("Enter the second grade: ");
        scanf("%d", &grade2);

        printf("Enter the third grade: ");
        scanf("%d", &grade3);

        // Calculate avergage

        average = ((float)grade1 + (float)grade2 + (float)grade3) / 3;

        // Print the average
        printf("The average of the three grades is: %.2f\n", average);

    return 0;
}
