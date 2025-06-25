#include<stdio.h>

int main()
{
    int n;
    printf("Enter how many numbers you want to print in the series: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i * i * i-1);
    }
    
}