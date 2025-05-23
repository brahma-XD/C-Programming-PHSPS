//program to swap two variables without using third variable
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    // Swapping without using a third variable
    a = a + b; // Step 1: a now contains the sum of both numbers
    b = a - b; // Step 2: b now contains the original value of a
    a = a - b; // Step 3: a now contains the original value of b
    
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}