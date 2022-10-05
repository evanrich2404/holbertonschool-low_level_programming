#include "holberton.h"

/**
 * cap_string - capitalizes first letter of each word in a string
 * @s: string input
 * Return: value of s
 */

char *cap_string(char *s)
{
	int i = 0;
	int f = 0;
	int j[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (s[i] != '\0')
	{
		if (s[i - 1] >= 'a' && s[i - 1] <= 'z' && s[i - 1] != j[f])
		{
			s[i] -= 32;
			f++;
		}
		i++;
	}
	return (s);
}
