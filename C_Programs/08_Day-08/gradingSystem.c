//Grading system

//Using if-else statements

#include <stdio.h>
#include <stdlib.h>

int main() {

    //Welcome the user!
    printf("\nWelcome to the SXZ Public School grading portal!\n\n");

    //declare variablles
    float marks;

    //prompt the user for the input
    printf("Please enter your marks: ");
    scanf("%f", &marks);

    //check the marks and print the grade
    if (marks >= 90 && marks <= 100) {
        printf("Your grade is A+.\n");
    } else if (marks >= 80 && marks < 90) {
        printf("Your grade is A.\n");
    } else if (marks >= 70 && marks < 80) {
        printf("Your grade is B.\n");
    } else if (marks >= 60 && marks < 70) {
        printf("Your grade is C.\n");
    } else if (marks >= 50 && marks < 60) {
        printf("Your grade is D.\n");
    } else if (marks >= 40 && marks < 50) {
        printf("Your grade is E.\n");
    } else if (marks >= 0 && marks < 40) {
        printf("Your grade is F.\n");
    } else {
        printf("Invalid input. Please enter a valid mark between 0 and 100.\n");
    }

    printf("\nThank you for using the SXZ Public School grading portal!\n\n");
    printf("Have a great day!\n\n");
    //exit the program

    return 0;
}
