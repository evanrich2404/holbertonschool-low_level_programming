#include "holberton.h"
#include "_putchar.c"
/**
 * cap_string - capitalizes first letter of each word in a string
 * Return: address of s
 * @s: string input
 */

char *cap_string(char *s)
{
	int f;
	int i = 0;
	char j[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	
while (s[i] != '\0')
	{
	for (f = 0; s[i] != j[f]; f++)
		{
		if ((s[i] + 1) >= 'a' && (s[i] + 1) <= 'z')
			{
				_putchar((s[i] + 1) - 32);
			}
		else
			_putchar(s[i] + 1);
		}
	i++;
	}
	return (s);
}
