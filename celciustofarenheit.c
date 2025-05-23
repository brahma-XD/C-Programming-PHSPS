#include <stdio.h>

int main()
{
    // Declare variables
    float c, f;  
    // Prompt user for input
    printf("Enter temperature in c: ");
    // Read input from user
    scanf("%f", &c);
    // Convert c to f
    f = (c * 9 / 5) + 32;
    // Print the result
    printf("%.2f c is equal to %.2f f\n", c, f);
    // Return success
    return 0;
    // End of program
    // The program converts a temperature from c to f using the formula F = (C * 9/5) + 32.
}