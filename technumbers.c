#include<stdio.h>

int main()
{
    int fn, sn;
    for (int i = 1000; i < 9999; i++)
    {
        fn = i / 100; // First two digits
        sn = i % 100; // Last two digits
        if ((fn + sn) * (fn + sn) == i)
        {
            printf("%d\n", i);
        }
    }
    
}