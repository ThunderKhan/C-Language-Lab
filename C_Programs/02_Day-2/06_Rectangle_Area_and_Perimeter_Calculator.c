#include <stdio.h>

int main() {
    int h;
    int w;

    // Welcome message
    printf("Welcome to the Rectangle Area and Perimeter Calculator!\n\n");

    // Prompt the user for parameters
    printf("Enter the height of the rectangle in meters: ");
    scanf("%d", &h);

    printf("Enter the width of the rectangle in meters: ");
    scanf("%d", &w);

    // Calculate the area and perimeter of the rectangle

    printf("The area of the rectangle is: %d square meters\n", h * w);
    printf("The Perimeter of the rectangle is: %d meters\n", 2 * (h + w));

    return 0;
}
