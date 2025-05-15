#include <stdio.h>
#include <Stdlib.h>

int main() {

    //Welcome the user!
    printf("\nWelcome to the Maximum function calculator!\n\n");

    //declare varibales
    float num1, num2, max;

    //prompt the use for input of two numbers
    printf("Please enter first number: ");
    scanf("%f", &num1);

    printf("Please enter second number: ");
    scanf("%f", &num2);

    //calculating the maximum
    if (num1 > num2) {
        max = num1;
    }
    else {
        max = num2;
    }

    //display the result 
    printf("The maximum of %.2f and %.2f is: %.2f\n", num1, num2, max);
    return 0;
}
