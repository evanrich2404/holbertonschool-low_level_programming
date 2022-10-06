#include "main.h"

/**
 * print_diagsums - sums diagonal integers in 2D Arr
 * @a: input two dimensional array values
 * @size: size of side of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, backSum = 0, forSum = 0;

	for (i = 0; i < size; i++)
	{
		backSum += a[(size + 1) * i];
		forSum += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", backSum, forSum);
}
