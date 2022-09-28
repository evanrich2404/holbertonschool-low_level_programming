#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints second half of a string, new line
 * @str: input variable
 */

void puts_half(char *str)
{
	int i;
	int length = _strlen(str);
	int n = (length - (length - 1) / 2);

	if (n % 2 == 0)
		n = length - (length / 2);
	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
