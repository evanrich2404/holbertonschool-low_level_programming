#include "main.h"

/**
 * _puts_recursion - prints a string, follwed by \n
 * @s: input string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + '0');
	}
}
