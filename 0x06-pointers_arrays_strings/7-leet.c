#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: string input
 * Return: string
 */
char *leet(char *s)
{
	int i, x;
	char arr1[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char arr2[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i]; i++)
		for (x = 0; x < 10; x++)
			if (s[i] == arr1[x])
				s[i] = arr2[x];
	return (s);
}
