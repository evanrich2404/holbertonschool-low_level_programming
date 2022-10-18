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
	char *s = malloc(sizeof(s1) + n + 1);
	unsigned int i, j;

	if (!s)
	{
		free(s);
		return (NULL);
	}
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		s[i] = s1[i];
	for (j = 0; j < n && s2[j]; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';

	return (s);
}
