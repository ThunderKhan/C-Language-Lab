#include <stdio.h>

int main() {
    
    //Print welcome message
    printf("\nWelcome to the Employee Salary Management System\n\n");

    //define variables
    char firstName[50], lastName[50];
    int employedID;
    double wageRate, hoursWorked, grossPay, netPay, taxRate, overtimeHours, overTimePay, totalPay;

    wageRate = 7.25;
    overTimePay = wageRate * 1.5;
    taxRate = 0.075;

    //get user input
    printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Enter your last name: ");
    scanf("%s", lastName);

    printf("Enter you employee ID: ");
    scanf("%d", &employedID);

    printf("Enter the number of hours worked this month: ");
    scanf("%lf", &hoursWorked);

    printf("Enter the number of overtime hours worked this month: ");
    scanf("%lf", &overtimeHours);
    
    //calculating gross pay
    grossPay = wageRate * hoursWorked;

    //calculating overtime pay
    grossPay += overTimePay * overtimeHours;

    //calculating net pay
    netPay = grossPay - (grossPay * taxRate);

    //calculating total pay
    totalPay = grossPay + netPay;

    //displaying the results
    printf("Your total pay is $%.2f, Thank you for your hard work Mr. %s!\n", totalPay, lastName);

    return 0;
}
