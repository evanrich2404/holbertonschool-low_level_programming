#include "holberton.h"

/**
 * cap_string - capitalizes first letter of each word in a string
 * Return: address of s
 * @s: string input
 */

char *cap_string(char *s)
{
	int f;
	int i = 0;
	char j[] = " \t\n,;.!?\"(){}";

	while (s[i])
	{
		for (f = 0; j[f]; f++)
		{
			if ((s[i] - 1) == j[f] && (s[i] >= 'a' && s[i] <= 'z'))
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}
	return (s);
}
