#include<stdio.h>

int main()
{
    int a;
    printf("Enter the year");
    scanf("%d",&a);
    if(a%400==0 || a%4==0 && a%100!=0)
        printf("Leap year");
    else
        printf("Not a leap year");



}