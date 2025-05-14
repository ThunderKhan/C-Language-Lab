#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    //Welcome the user
    printf("\n\nWelcome to the Eponentiation Program!\n");

    //declare variables

    double num, x2, x4, x6, x8;

    //prompt user for input
    printf("Enter a number: "); 
    scanf("%lf", &num);

    //calculate the exponentiation
    x2 = num * num;
    x4 = x2 * x2;
    x6 = x4 * x2;
    x8 = x4 * x4;

    //display the results
    printf("\nThe square of %.2f is %.2f\n", num, x2);
    printf("The fourth power of %.2f is %.2f\n", num, x4);
    printf("The sixth power of %.2f is %.2f\n", num, x6);
    printf("The eighth power of %.2f is %.2f\n", num, x8);
    printf("\n\nThank you for using the Eponentiation Program!\n");
    printf("Goodbye!\n\n");

    return 0;
}
