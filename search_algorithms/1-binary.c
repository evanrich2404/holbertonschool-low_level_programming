/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: array to search
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value in the array or -1 if not found
 */

#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i < right; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);

		i = left + (right - left) / 2;

		if (array[i] == value)
			return (i);

		if (array[i] < value)
			left = i + 1;
		else
			right = i - 1;
	}

	return (-1);
}
