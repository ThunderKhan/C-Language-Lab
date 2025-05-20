#include <stdio.h>
#include <stdlib.h>

int main() {

    // A simple program to find the absolute value of a number.
    // This program will use the standard library and abs() functionality to achieve it's objective.

    // Declaring the variables.
    int num, abs_num;

    // Prompting the user for an input with validation.
    printf("Enter an Integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1; // Exit the program with an error code.
    }

    // Finding the absolute value of the number.
    abs_num = abs(num);

    // Adding control flow for support of Zero value.
    if (num == 0) {
        printf("Zero is neither positive nor negative.\n");
    } else {
        printf("The Absolute value of %d is %d.\n", num, abs_num);
    }

    return 0;
}
