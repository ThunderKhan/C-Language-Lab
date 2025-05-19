#include <stdio.h>
#include <stdlib.h>

int main() {

    //welcome the user
    printf("Welcome to the simple calculator!\n");

    //declare variables
    float num1, num2, result;
    char operator;

    //prompt the user for two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    //perform the calculation based on the operator
    switch (operator) {
        case '+':
        result = num1 + num2;
        break;

        case '-':
        result = num1 - num2;
        break;

        case '*': 
        result = num1 * num2;
        break;

        case '/':
        if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            } else {
                result = num1 / num2;
            }
        break;

        default:
        printf("Error: Invalid operator\n");
        return 1;
    }

    //display the result
    printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);

    return 0;
}
