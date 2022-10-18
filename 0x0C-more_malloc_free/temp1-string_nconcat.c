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
	unsigned int i, j, p = 0, o = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; (i < n && s2[i] != '\0'); i++)

	j = slen + i;
	arr = malloc(j + 1);

	if (!arr)
		return (NULL);

	while (s1[slen] != '\0')
	{
		arr[p] = s1[p];
		p++;
	}
	while (o < i && s2[o] != '\0')
	{
		arr[p] = s2[o];
		p++;
		o++;
	}
	arr[p] = '\0';
	return (arr);
}
