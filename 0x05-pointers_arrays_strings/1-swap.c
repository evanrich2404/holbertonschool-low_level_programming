#include "main.h"

/**
 * swap_int - function to swap the integers
 * @a: first int
 * @b: second int
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}