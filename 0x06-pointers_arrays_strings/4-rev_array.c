#include "holberton.h"
#include "_putchar.c"
#include "_strlen.c"

/**
 * reverse_array - reverses the content of an array of integers
 * @n: integer input (number of elements of the array)
 * @a: pointer to an array input
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(a[i]);
	for (i = n - 1; i >= 0; i--)
		_putchar(a[i]);
}
