#include <stdio.h>

int main() {

    //Welcome the user
    printf("\nWelcome to the Decimal truncator!\n");

    //declare variables
    float givenNumber, decimalPart;
    int integerPart;

    //prompt the usr for the input
    printf("\nPlease enter the Data: ");
    scanf("%f", &givenNumber);

    //Calculate the integer part
    integerPart = (int)givenNumber;

    //Calculate the decimal part
    decimalPart = givenNumber - integerPart;

    //Display the reuslt
    printf("\nThe decimal part of the number is: %.2f\n", decimalPart);

    return 0;
}
