// A basic hard coded program
#include <stdio.h>

int main() {
    printf("Current Year: %d\nAge: %d\n, Birth Year: %d - %d = %d\n", 2025, 18, 2025, 18, 2025 - 18);
    return 0;
}

// A more user-friendly robus program

#include <stdio.h>

int main() {
    int year;
    int age;

    printf("Enter the Current Year: ");
    scanf("%d", &year);

    printf("Enter you Age: ");
    scanf("%d", &age);

    printf("Your Birth year is: %d\n", year - age);

    return 0;
}
