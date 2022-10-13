#include "main.h"

/**
 * _strspn - calculates byte overlap
 * @s: input string
 * @accept: string w/ bytes to be accepted
 * Return: num of target byte matches
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i = 0, j = 0;

	while (accept[i])
	{
		j = 0;
		while ((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z'))
		{
			if (s[j] == accept[i])
			{
				b++;
			}
			j++;
		}
		i++;
	}
	return (b);
}
