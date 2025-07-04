#include<stdio.h>

int main()
{
    int u,n,r=0,p;
    printf("Enter a number: ");
    scanf("%d",&n);
    p = n;
    while(n>0)
    {
       u=n%10; // to get the last digit
       n=n/10; // to reasign the left number as n
       //reverse the number
         r=r*10+u; // to reverse the number
    }
    if(p==r)
    {
        printf("The number is a palindrome\n");
    }
    else
    {
        printf("The number is not a palindrome %d \n");
    }
    return 0;

}