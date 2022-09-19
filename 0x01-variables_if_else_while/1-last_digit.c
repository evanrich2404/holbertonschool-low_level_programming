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
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = (n % 10);
	/* Printing about n */

		if (n > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, m);
		else if (n == 0)
			printf("Last digit of %d is %d and is 0\n", n, m);
		else
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);

		return (0);
}
