#include <stdio.h>
#include <stdlib.h>

int main() {

    //Welcome the user
    printf("\nWelcome the Maximum and Minimum Calculator\n\n");

    //Delcare variables
    float num1, num2, max, min;

    //Prompt the user for input
    printf("\nEnter the first number: ");
    scanf("%f", &num1);

    printf("\nEnter the second number: ");
    scanf("%f", &num2);

    //calculate the maximum and minimum
    if (num1 > num2) {
        max = num1;
        min = num2;
    } else {
        max = num2;
        min = num1;
    }

    //Display the results
    printf("\n\nThe maximum number is %.2f and the minimum number is %.2f\n", max, min);

    return 0;
}
