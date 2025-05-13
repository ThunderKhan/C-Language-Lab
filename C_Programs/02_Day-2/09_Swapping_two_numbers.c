#include <stdio.h>

int main() {

    // Swapping two numbers using a temporary variable
    int a = 5, b = 10, temp;
    printf("Before swapping: a = %d, b = %d\n", a, b);

    //swapping
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);
    
    // Swapping two numbers using arithmetic operations
    int a = 5, b = 10;
    printf("Before swapping: a = %d, b = %d\n", a, b);

    //swapping
    a = a + b; // a now becomes 15
    b = a - b; // b becomes 5
    a = a - b; // a becomes 10

    printf("After swapping: a = %d, b = %d\n", a, b);

    // Swapping two numbers using bitwise XOR
    int a = 5, b = 10;
    printf("Before swapping: a = %d, b = %d\n", a, b);

    //swapping
    a = a ^ b; // a now becomes 15
    b = a ^ b; // b becomes 5
    a = a ^ b; // a becomes 10

    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}
