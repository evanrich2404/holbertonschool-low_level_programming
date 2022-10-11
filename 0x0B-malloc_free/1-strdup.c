#include "main.h"
/**
 * _strdup - returns ptr to new alloc space in mem, contains cp of str as param
 * @str: given string
 * Return: pointer to a duped string
 */
char *_strdup(char *str)
{
	char *out;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len++])
		;
	out = malloc(sizeof(char) * len);
	if (out == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		out[i] = str[i];
	}
	return(out);
}
