#include <stdio.h>
#include <stdlib.h>

int main() {

    //Welcome the user!
    printf("\nWelcome to the grader!\n\n");

    //declare variables
    char name[50];
    float grade;

    //prompt the user for their name and grade
    printf("Please enter your First name:  ");
    scanf("%s", name);

    printf("Please enter your grade: ");
    scanf("%f", &grade);

    //check the grades
    if (grade >= 80){
        printf("\nCongratulations %s! You have passed with a grade of %.2f.\n", name, grade);

        } else if (grade >=60 && grade < 80) {
            printf("\nGood job %s! you passed with %.2f grade, But you need work hader next time!\n", name, grade);
        }
        else if (grade < 60 && grade >= 0){
            printf("\nSorry %s! you have failed with a grade of %.2f. Try again next time!\n", name, grade);
        }
        else {
            printf("\nInvalid grade entered. Please enter a grade between 0 and 100.\n");
        }

    return 0;
}
