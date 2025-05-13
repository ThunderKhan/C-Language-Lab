#include <stdio.h>

int main() {
    
    // A simple program to find the nth term of an Arithmetic Sequence

    printf("Welcome to the Arithmetic Sequence Calculator!\n");

    // Declare variables

    int firstTerm, commonDifference, n, nthTerm;

    //Get user input

    printf("Enter the first term of the Sequence: ");
    scanf("%d", &firstTerm);

    printf("Enter the common differnce: ");
    scanf("%d", &commonDifference);

    printf("Enter the term number you want to find: ");
    scanf("%d", &n);

    // Calculaing the nth term of the Arithmetic Sequence

    nthTerm = firstTerm + (n - 1) * commonDifference;

    // Display the resulte
    printf("The %dth term of the Arithmetic Sequence is: %d\n", n, nthTerm);

    return 0;   
}
