#include<stdio.h>

int main()
{
    // switch case program to print apple, ball or cat according to the input character a,b,c
    char ch;
    printf("Enter a character (a, b, c): ");
    scanf(" %c", &ch);
    switch (ch)
    {
    case 'a ':
        printf("apple\n");      
        break;
    case 'b':
        printf("ball\n");
        break;
    case 'c':
        printf("cat\n");
        break;
    case 'd':     
        printf("dog\n");
        break;
    default:
        printf("Invalid character\n");
        break;
    }
}