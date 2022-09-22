#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
	for (; n > 0; n--)
		_putchar('_');
	_putchar('\n');
}
