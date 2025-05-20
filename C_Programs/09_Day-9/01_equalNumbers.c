#include <stdio.h>
#include <stdlib.h>

int main(){

    //Program to check if two numbers are equal or not 
    float num1, num2;

    //prompt the use for input
    printf("\nEnter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    //check if the numbers are equal
    if (num1 == num2) {
        printf("\nTrue\n");
    } else {
        printf("\nFalse\n");
    }

    return 0;
}
