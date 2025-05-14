#include <stdio.h>

int main() {
    
    //Welcome the user to the program
    printf("\nWelcome to the Driving time calculator!\n\n");

    //Delcare variables
    double distance, speed, time;

    //prompt the user for distance and speed
    printf("Please enter the distance in kilometers between the cities: ");
    scanf("%lf", &distance);

    printf("Please enter the speed in kilometer per hour: ");
    scanf("%lf", &speed);

    //calculate the Driving time
    time = distance / speed;

    //Display the result
    printf("\nThe Driving time is %.2f hours.\n", time);
    
    return 0;
}
