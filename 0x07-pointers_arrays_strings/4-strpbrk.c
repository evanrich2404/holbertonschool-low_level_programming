#include "main.h"

/**
 * *_strpbrk - locks first accepted byte
 * @s: input string
 * @accept: string w/ bytes to be accepted
 * Return: point to locked byte, or NULL if no match
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0, offset = 999;

	while (accept[i])
	{
		j = 0;
		while (s[j])
		{
			if (s[j] == accept[i])
			{
				if (j < offset)
				{
					offset = j;
				}
			}
			j++;
		}
		i++;
	}
	s += offset;
	if (offset < 999)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
