#include "main.h"
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * Return: pointer to the allocated memory
 * @nmemb: elements input
 * @size: bytes input
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		mem[i] = 0;
	return (mem);
}
