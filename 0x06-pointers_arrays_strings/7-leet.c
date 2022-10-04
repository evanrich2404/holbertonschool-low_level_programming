#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: string input
 * Return: string
 */

char *leet(char *s)
{
	int i;

	for (i = 0; s[i] >= 0; i++)
	{
		if (i == 'a' && i == 'A')
		{
			_putchar('4');
		}
		else if (i == 'e' && i == 'E')
		{
			_putchar('3');
		}
		else if (i == 'o' && i == 'O')
		{
			_putchar('0');
		}
		else if (i == 't' && i == 'T')
		{
			_putchar('7');
		}
		else if (i == 'l' && i == 'L')
		{
			_putchar('1');
		}
		else
			return (s);
	}
}
