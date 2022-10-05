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
	char j[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	
	while (s[i])
	{
		for (f = 0; j[f]; f++)
		{
			if ((s[i] - 1) == j[f] && (s[i] >= 'a' && s[i] <= 'z'))
			{
				s[i] = s[i] - 32;
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
