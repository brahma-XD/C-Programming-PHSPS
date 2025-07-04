#include<stdio.h>

int main()
{
    int n,u,r=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (n!=0)
    {
        u=n%10; 
        printf("%d ",u); 
        n=n/10; 
        r=r+u;
    }
    printf("\nSum of digits: %d\n", r);
    return 0;
    
}