#include <stdio.h>
#include <stdlib.h>

int main() {

    //Program to check if a number is a double-digit or triple-digit number
    //Declare variable 
    int num;

    //Prompt the user for input and validate it
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1; //Exit the program if input is invalid
    }

    //Convert the number to its absolute value
    int absNum = abs(num); //Support for Negative numbers

    //Check if the number is double-digit or triple-digit
    if (absNum >= 10 && absNum <= 99) {
        printf("\n%d is a double-digit number.\n", num);
    } else if (absNum == 0) {
        printf("\nZero is neither a double-digit nor a triple-digit number.\n"); //Support for Zero
    } else if (absNum >= 100 && absNum <= 999) {
        printf("\n%d is a triple-digit number.\n", num);
    } else {
        printf("\n%d is neither a double-digit nor a triple-digit number.\n", num);
    }

    return 0;
}
