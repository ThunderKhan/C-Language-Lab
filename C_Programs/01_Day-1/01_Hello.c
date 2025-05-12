// This is a basic C program that prints "Hello World!" to the screen.
// It's often the first program written by people learning a new programming language.

// ----------------------------------------------
// PREPROCESSOR DIRECTIVE SECTION
// ----------------------------------------------

// This line tells the compiler to include the Standard Input Output library.
// It's required for using functions like printf(), which prints output to the screen.
#include <stdio.h>

// ----------------------------------------------
// MAIN FUNCTION - Starting point of the program
// ----------------------------------------------

int main() // 'int' means this function returns an integer to the operating system
{
    // ------------------------------------------
    // FUNCTION BODY - Code that runs when program starts
    // ------------------------------------------

    // printf is a standard C function used to display text on the screen.
    // \n is the newline character — it moves the cursor to the next line after printing.
    // So this line will print: Hello World! and then go to a new line.
    printf("Hello World!\n");

    // This line returns 0 to the operating system.
    // It’s a way of saying "everything ran successfully."
    // If we wanted to indicate an error, we could return a non-zero number.
    return 0;
}

// ----------------------------------------------
// END OF PROGRAM
// ----------------------------------------------
