#include <stdio.h>
#include <stdlib.h>

int main() {

    //Welcome the user!
    printf("\nWelcome to the Grading system!\n\n");

    //declare variables
    float score;

    //prompt the user for input
    printf("Please enter you score: ");
    scanf("%f", &score);

    //checking the score!
    if (score >= 60) {
        printf("Congratulations! You passed the exam!\n");
    } else {
        printf("Sorry, you failed the exam. Better luck next time!\n");
    }

    return 0;
}
