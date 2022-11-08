#include "main.h"

/**
 * set_bit - sets itsy bitsy of n at index to 1
 * @n: pointer to uli named n (base 10)
 * @index: base 2 dig index (starting 0 right to left)
 * Return: -1 if someone supplied silly index else 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	*n |= (1 << index);
	return (1);
}
