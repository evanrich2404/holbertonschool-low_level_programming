#include "main.h"

/**
 * flip_bits - gets num of bits needed to convert n to m
 * @n: uli arg in base 10 (number 1)
 * @m: uli arg in base 10 (number 2)
 * Return: count needed to perform conversion
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tildaCount = 0, tmpULI = 0;

	tmpULI = n ^ m;
	while (tmpULI)
	{
		if (tmpULI & 1)
		{
			tildaCount++;
		}
		tmpULI >>= 1;
	}
	return (tildaCount);
}
