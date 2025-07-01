// write a c program to print the Fibonacci series up to n terms
#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++)
    {
        if (i <= 1)
            next = i; // first two terms are 0 and 1
        else
        {
            next = first + second; // next term is the sum of the previous two
            first = second; // update first to second
            second = next; // update second to next
        }
        printf("%d ", next);
    }
    
    printf("\n");
    return 0;
    
}