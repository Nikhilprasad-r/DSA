#include <stdio.h>

int main() {
    float a, b, c;

    // Prompt the user for the first number
    printf("Enter the value for a: ");
    scanf("%f", &a);

    // Prompt the user for the second number
    printf("Enter the value for c: ");
    scanf("%f", &b);

    // Add the numbers
    c = a + b;

    // Print the result
    printf("The result of a + b is: %.2f\n", c);

    return 0;
}
