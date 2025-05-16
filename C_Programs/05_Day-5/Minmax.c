// A program to find the maximum and minimum of three numbers.

#include <stdio.h>
#include <stdlib.h>

int main() {

    //Welcome the user!
    printf("\nWelcome to the Maximum and Minimum of three numbers program!\n\n");

    //declare the varibles
    float num1, num2, num3, max, min;

    //prompt the user for input
    printf("Please enter the first number: ");
    scanf("%f", &num1);

    printf("Please enter the second number: ");
    scanf("%f", &num2);

    printf("Please enter the third number: ");
    scanf("%f", &num3);


    //Calculating the maximum and minimum
    if (num1 > num2) {
        max = num1;
        min = num2;
    } else {
        max = num2;
        min = num1;
    }

    if (num3 > max) {
        max = num3;
    } else if (num3 < min) {
        min = num3;
    }

    //Display the results
    printf("\nThe Maximum of three numbers is: %.2f\n", max);
    printf("\nThe Minumum of three number is %.2f\n", min);
    printf("\nThank you for using the Maximum and Minimum of three numbers program!.\n\n");

    return 0;
}
