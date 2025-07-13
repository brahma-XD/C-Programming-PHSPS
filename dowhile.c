#include<stdio.h>
int main() {
    int i = 0;
    do {
        printf("%d\n", i);
        i++;
    } while (i < 5);
    return 0;
}
// This program uses a do-while loop to print the value of i from 0 to 4.
// The loop will execute at least once, even if the condition is false initially.
// The output will be: