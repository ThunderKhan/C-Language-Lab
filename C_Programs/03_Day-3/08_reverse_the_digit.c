//Method 1

#include <stdio.h>

int main() {

    //Welcome the user!
    printf("\n\nWelcome the Number reverser!\nThis program will reverse the digits of any 3 digit number.\n\n");

    //declare the variables

    int num, digit1, digit2, digit3, reversedNum;

    //prompt the user for input
    printf("Please enter a 3 digit number: ");
    scanf("%d", &num);

    //calculate the digits
    digit1 =  num / 100;
    digit2 = (num / 10) % 10;
    digit3 = num % 10;

    //calculate the reversed number
    reversedNum = digit3 * 100 + digit2 * 10 + digit1;

    //display the reversed number
    printf("The number %d reversed is %d!\n", num, reversedNum);

    return 0;
}


//Method 2

#include <stdio.h>

int main() {

    //Welcome the user!
    printf("\n\nWelcome the Number reverser!\nThis program will reverse the digits of any 3 digit number.\n\n");

    //declare the variables

    int num, digit1, digit2, digit3;

    //prompt the user for input
    printf("Please enter a 3 digit number: ");
    scanf("%d", &num);

    //calculate the digits
    digit1 =  num / 100;
    digit2 = (num / 10) % 10;
    digit3 = num % 10;


    //display the reversed number
    printf("The number %d reversed is %d%d%d!\n", num, digit3, digit2, digit1);

    return 0;
}
