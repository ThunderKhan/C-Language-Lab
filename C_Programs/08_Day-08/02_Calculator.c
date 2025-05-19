#include <stdio.h>
#include <stdlib.h>

int main() {

    // A simple two numbers calculator program
    // It will ask the user to enter two numbers
    // and then it will ask the user to enter an operator

    // Greet the user 
    printf("\nWelcome to the claculator program!\n\n");

    //declare vaiables
    float num1, num2, results;
    char operator;

    //prompt the user for input.
    printf("\nEnter the first number: ");
    scanf("%f", &num1);

    printf("\nEnter the second number: ");
    scanf("%f", &num2);

    printf("\nSelect an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    //perform the calcuations
    if (operator == '+') {
        results = num1 + num2;
    } else if (operator == '-') {
        results = num1 - num2;
    } else if (operator == '*') {
        results = num1 * num2;
    } else if (operator == '/') {
        if (num2 != 0) {
            results = num1 / num2;
        } else {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        } 
    } else {
        printf("Error: Invalid operator.\n");
        return 1;
    }

    //display the result
    printf("\n%.2f %c %.2f = %.2f\n", num1, operator, num2, results);
    return 0;
}
