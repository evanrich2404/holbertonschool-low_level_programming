#include "main.h"

/**
 * print_rev - function that prints a string in reverse folby \n
 * @s: input variable
 */

void print_rev(char *s)
{
	int i, length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
