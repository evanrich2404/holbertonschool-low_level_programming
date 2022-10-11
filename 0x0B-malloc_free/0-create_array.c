#include "main.h"
/**
 * create_array - creates an array of chars, and initializes with specific char
 * @size: input for size
 * @c: input char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *out;
	unsigned int i;

	if (size < 1)
		return (NULL);
	out = malloc(sizeof(char) * size);
	if (out == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		out[i] = c;
	}
	return (out);
}
