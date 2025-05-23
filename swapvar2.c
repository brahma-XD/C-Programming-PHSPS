// c program to swap two variables using a third variable

#include <stdio.h>

int main()
{
    // Declare variables
    int a, b, temp;
    
    // Prompt user for input
    printf("Enter two numbers: ");
    
    // Read input from user
    scanf("%d %d", &a, &b);
    
    // Print values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    // Swapping using a third variable
    temp = a; // Store the value of a in temp
    a = b;    // Assign the value of b to a
    b = temp; // Assign the value of temp (original a) to b
    
    // Print values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}
// End of program