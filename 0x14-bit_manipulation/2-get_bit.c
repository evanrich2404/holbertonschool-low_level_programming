#include "main.h"

/**
 * get_bit - determines value of bit (0 or 1) at index
 * @n: uli to work on named n (base 10)
 * @index: base 2 dig index (starting 0 right to left)
 * Return: value of itsy bitsy at index or -1 if bad magic
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else if ((1 << index) & n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
