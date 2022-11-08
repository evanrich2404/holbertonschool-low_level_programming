#include "main.h"

/**
 * print_binary - writes ulin to SO as bin n
 * @n: uli to convert
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
