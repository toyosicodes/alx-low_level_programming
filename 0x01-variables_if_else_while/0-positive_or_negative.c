#include <stdlib.h>

#include <time.h>
<<<<<<< HEAD

#include <stdio.h>



/**

 * main - Prints if number is positive, zero or negative

 *

 * Return: Always (Success)

 */

=======
#include <stdio.h>

/* main - assigns a random number to int n every time
* it executes, and prints it
* Return: Always 0 (Success)
*/
>>>>>>> 34066a5adcffaeaadd201cd6cfe1584ce26a282f
int main(void)

{
<<<<<<< HEAD

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;



	if (n > 0)

	{

		printf("%d is positive\n", n);

	}

	else if (n == 0)

	{

		printf("%d is zero\n", n);

	}

	else

	{

		printf("%d is negative\n", n);

	}



	return (0);

=======
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
>>>>>>> 34066a5adcffaeaadd201cd6cfe1584ce26a282f
}
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints if number is positive, zero or negative
*
* Return: Always (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
