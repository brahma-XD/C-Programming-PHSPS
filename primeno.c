#include<stdio.h>

int main()
{
    int a, isprime = 0;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a <= 1) {
        printf("%d is not a prime number\n", a);
        return 0;
    }

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            isprime = 1;
            break;
        }
    }

    if (isprime != 0)
    {
        printf("%d is not a prime number\n", a);
    }
    else
    {
        printf("%d is a prime number\n", a);
    }

    return 0;
}