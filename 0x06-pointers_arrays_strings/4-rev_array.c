#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @n: integer input (number of elements of the array)
 * @a: pointer to an array input
 */

void reverse_array(int *a, int n)
{
	int i;
	int t = 0;

	for (i = 0; i < (n / 2); i++)
	{

		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
