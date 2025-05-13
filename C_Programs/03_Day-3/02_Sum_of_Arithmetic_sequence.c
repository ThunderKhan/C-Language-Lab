#include <stdio.h>

int main() {
    
    //Welcome the user
    printf("\nWelcome to the Summation of Arithmetic Sequence Calculator!\n\n");

    //declare variables
    float firstTerm, commonDifference, lastTerm, sum;
    int numberOfTerms;

    //prompt user for input
    printf("Enter the first term of the sequence: ");
    scanf("%f", &firstTerm);

    printf("Enter the common difference: ");
    scanf("%f", &commonDifference);

    printf("Enter the number of terms: ");
    scanf("%d", &numberOfTerms);

    //calculate the last term
    lastTerm = firstTerm + (numberOfTerms - 1) * commonDifference;

    //calculate the sum of the arithmetic sequence
    sum = (numberOfTerms / 2.0) * (firstTerm + lastTerm);

    //display the result
    printf("The sum of the arithmetic sequence is %.2f\n", sum);

    return 0;
}
