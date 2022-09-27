#include "main.h"

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

/**
 * _strlen - function that returns the length of a string
 * @s: input value
 * Return: is length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
