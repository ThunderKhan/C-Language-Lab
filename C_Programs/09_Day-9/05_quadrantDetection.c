#include <stdio.h>

int main() {

    // A simple program to find the quadrant of a given Coordinate point on the Cartesian plane.
    // This program will demonstrate extensive use of control flow.

    // Declare the variables.
    int x, y;

    // Prompt the user for input.
    printf("Enter the X coordinate: ");
    if (scanf("%d", &x) != 1) {
        printf("Invalid input! Please enter a valid integer.");
        return 1;
    }

    printf("Enter the Y coordinate: ");
    if (scanf("%d", &y) != 1) {
        printf("Invalid input! Please enter a valid integer.");
        return 1;
    }

    // Finding and printing the quadrant of the point using control flow.
    if (x == 0 && y == 0) {
        printf("The given point (0, 0) is the Origin"); // Support for the Origin.
    } else if (x == 0) {
        printf("The point lies on the Y-axis.");
    } else if (y == 0) {
        printf("The point lies on the X-axis."); 
    } else if (x > 0 && y > 0) {
        printf("The point (%d, %d) is in the First Quadrant!", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%d, %d) is in the Second Quadrant!", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%d, %d) is in the Third Quadrant!", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%d, %d) is in the Fourth Quadrant!", x, y);
    }

    return 0;
}
