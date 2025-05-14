#include <stdio.h>

int main() {

    //Welcome the user
    printf("\nWelcome to the 3-digit sum calculator!\nThis program will calculate the sum of the digits of a 3-digit number.\n\n");

    //declare variables
    int number, digit1, digit2, digit3, sum;

    //prompt the user for input
    printf("Please enter a 3-digit number: ");
    scanf("%d", &number);

    //calculate the digits
    digit1 = number / 100;
    digit2 = (number / 10) %10;
    digit3 = number % 10;

    //calculate the sum
    sum = digit1 + digit2 + digit3;

    //display the result
    printf("\n\nThe sum of the digits of %d is %d\n", number, sum);

    return 0;
}
