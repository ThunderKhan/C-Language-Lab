#include <stdio.h>

int main() {

    // Description:
    // A simple program to print the Absolute value of a number.
    // If input is negative, it will print the positive value.
    // If input is positive, it will print the same value.
    // If input is zero, it will print zero.
    // The program will also handle invalid inputs gracefully.
    
    // Delcare Vriables
    int num;

    // Prompt the user for input and validate the input.
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) { 
        printf("Invalid input. Please enter a valid integer.\n");
        return 1; // Exit the program with an error code.
    }

    // Printing the absolute value
    if (num < 0) {
        printf("The absolute value of %d is %d\n", num, -1 * num);
    } else if (num == 0) {
        printf("Zero is neither negative nor positive.\n"); // Support for Zero case.
    } else {
        printf("The absolute value of %d is %d\n", num, num);
    }

    return 0;
}
