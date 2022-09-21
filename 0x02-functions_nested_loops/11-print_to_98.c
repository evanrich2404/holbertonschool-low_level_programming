#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * user input's number prints to 98, regardless < 98 or > 98
 * @n: number input
 * Return: None
 */
void print_to_98(int n)
{
	int i, t, c = 0;

	t = 98;  /* Change this value to adjust number to print to */

	if (n <= t)
	{
		for (i = n; i <= t; i++)
		{
			c == 0 ? c = 1 : _putchar(', ');
			_putchar(('%d'), i);
		}
	}
	else
	{
		for (i = n; i >= t; i--)
		{
			c == 0 ? c = 1 : _putchar(', ');
			_putchar(('%d'), i);
		}
	}
	_putchar('\n');
}
