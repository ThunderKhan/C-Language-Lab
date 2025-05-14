#include <stdio.h>
#include <math.h>

int main() {

    //Welcome the user!
    printf("\nWelcome to the Distance between two points Calculator!\n\n");

    //declare varibles
    double x1, y1, x2, y2, distance;

    //User input

    //Get the first point
    printf("Enter the x coordinate of the first point: ");
    scanf("%lf", &x1);

    printf("Enter the y coordinate of the first point: ");
    scanf("%lf", &y1);

    //Get the second point
    printf("Enter the x coordinate of the second point: ");
    scanf("%lf", &x2);

    printf("Enter the y coordinate of the second point: ");
    scanf("%lf", &y2);

    //Calculate the distance
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    //display the result
    printf("\nThe distance between the points (%.2f, %.2f) and (%.2f, %.2f) is %.2f\n", x1, y1, x2, y2, distance);

    return 0;
}
