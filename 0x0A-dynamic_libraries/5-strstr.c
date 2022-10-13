#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: main string input
 * @needle: substring input
 * Return: either return location of substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, s;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		s = i;

		for (j = 0; (needle[j] == haystack[i]) != '\0'; j++)
		{
			i++;
		}
		if (needle[j] == '\0')
			return (haystack + s);
	}
	return (NULL);
}
