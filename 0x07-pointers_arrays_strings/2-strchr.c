#include "main.h"

/**
 * *_strchr - points to 1st c in s
 * @s: input string
 * @c: char to be located
 * Return: point to 1st instance or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0, j = 0;

	while (s[i])
	{
		i++;
	}
	while (j <= i)
	{
		if (s[j] == c)
		{
			s += j;
			return (s);
		}
		j++;
	}
	return (NULL);
}
