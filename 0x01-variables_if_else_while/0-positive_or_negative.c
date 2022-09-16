#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* edited by Evan R */

/**
 * main - prints whether n is positive negative or zero
 * Return: is 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Printing about n */

		if (n > 0)
			printf("%d is positive\n", n);
		if (n == 0)
			printf("%d is zero\n", n);
		if (n < 0)
			printf("%d is negative\n", n);

	return (0);
}
