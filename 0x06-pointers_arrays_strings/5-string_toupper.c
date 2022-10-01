#include "holberton.h"
#include "_strlen.c"

/**
 * string_toupper - changes all lowercase to uppercase
 * @s: input string
 * Return: s
 */

char *string_toupper(char *s)
{
	int i;
	int len = _strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
