#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - assigns a random number to int n every time
* it executes, and prints it
* Return: Always 0 (Success)
*/
int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n < 0)
        printf(n, " is negative\n");
    else if (n = 0)
        printf(n, " is zero\n");
    else if (n > 0)
        printf(n, " is positive\n");
    return (0);
}
