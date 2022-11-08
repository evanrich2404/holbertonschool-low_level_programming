#include "main.h"

/**
 * flip_bits - dets num of bits needed to conv n to m
 * @n: uli arg in base 10 (number 1)
 * @m: uli arg in base 10 (number 2)
 * Return: tilda count needed to perform conv
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
