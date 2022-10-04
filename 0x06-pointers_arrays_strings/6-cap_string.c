#include "holberton.h"
#include "_putchar.c"
/**
 * cap_string - capitalizes first letter of each word in a string
 * Return: 0
 * @str: string input
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; ++i)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				_putchar(str[i]);
			}
		}
		else if (str[i - 1] == ' ')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				_putchar(str[i]);
			}
		}
		else
			_putchar(str[i]);
	}
	return (0);
}
