#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @str: input value
 * Return: is length of string
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
}

/**
 * puts2 - function that prints every other character in a string
 * Return: is 0
 * @str: input string/variable
 */

void puts2(char *str)
{
	int i;
	int length = _strlen(str);

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
