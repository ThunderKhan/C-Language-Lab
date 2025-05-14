#include <stdio.h>

int main() {

    //Welcome the user
    printf("\nWelcome to the Seconds to Hours, Minutes and Seconds Converter!\n\n");

    //Declare variables
    int totalSeconds, hours, minutes, seconds;

    //Promp the uses for input
    printf("Enter the total number of seconds: ");
    scanf("%d", &totalSeconds);

    //Calculate hours, minutes and seconds
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    //Display the result
    printf("\nThe equivalent time is: %d hour(s), %d minute(s), and %d second(s). \n", hours, minutes, seconds);
    
    return 0;
}
