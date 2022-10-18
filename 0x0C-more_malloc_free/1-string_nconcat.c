#include "main.h"
#include "2-strlen.c"
/**
 * string_nconcat - concatenates two strings
 * Return: NULL if failure, pointer to new alloc mem containing s1 with n of s2
 * @s1: input string 1
 * @s2: input string 2
 * @n: number of bytes
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int slen = _strlen(s1);
	unsigned int size = slen + n + 1;
	char *s = malloc(size);
	unsigned int i;

	if (!s)
		return (NULL);
	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	for (i = 0; i < slen; i++)
		s[i] = s1[i];
	for (i = 0; i < n && s2[i] != '\0'; i++)
		s[slen + i] = s2[i];
	s[slen + i] = '\0';

	return (s);
}
