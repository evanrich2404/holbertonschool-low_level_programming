#include "main.h"

/**
 * puts_half - prints second half of a string, new line
 * @str: input variable
 */

void puts_half(char *str)
{
	int i;
	int length = _strlen(str);
	int n = (length - 1) / 2;
	char first[100], second[100];

	if (n < length)
	{
		for (i = 0; i < n; i++)
			first[i] = str[i];
		first[n] = '\0';

		for (i = n; i <= length; i++)
			second[i - n] = str[i];
		_putchar(str[i]);
	}
	_putchar('\n');
}
