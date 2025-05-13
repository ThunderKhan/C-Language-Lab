#include <stdio.h>

int main() {
    // Welcome user
    printf("Welcome to the Celsius to Fahrenheit converter!\n");

    // Declare variables
    double celsius, fahrenheit;

    // Prompt user for input
    printf("Enter the temperature in Celsius: ");
    scanf("%lf", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 1.8) + 32;

    // Display the result
    printf("The temperature in Fahrenheit is: %.2f\n", fahrenheit);

    return 0;
}
