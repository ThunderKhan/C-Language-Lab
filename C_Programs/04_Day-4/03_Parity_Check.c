#include <stdio.h>
#include <stdlib.h>

int main() {

    //Welcome the user!
    printf("\nWelcome to the parity checker!\n\nA simple program to check if a number is even or odd.\n\n");

    //declare variables
    int num;

    //ask the user for a number
    printf("Enter a number: ");
    scanf("%d", &num);

    //checking and displaying the result
    if ( num % 2 == 0) {
        printf("\nThe number %d is even.\n", num);
    } else {
        printf("\nThe number %d is odd.\n", num);
    }

    return 0;
}
