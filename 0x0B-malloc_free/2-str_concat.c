#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string input one
 * @s2: string input two
 * Return: s1s2\0
 */
char *str_concat(char *s1, char *s2)
{
	char *out;
	int d1, d2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	d1 = d2 = 0;

	while (s1[d1])
		d1++;
	while (s2[d2])
		d2++;

	out = malloc(sizeof(char) * (d1 + d2 + 1));

	if (out == NULL)
		return (NULL);
	for (i = 0; i < d1; i++)
		out[i] = s1[i];
	for (i = 0; i < d2; i++)
		out[i + d2] = s2[i];
	out[d1 + d2 + 1] = '\0';

	return (out);
}
