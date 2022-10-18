#include "main.h"
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * Return: pointer to the allocated memory
 * @nmemb: elements input
 * @size: bytes input
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem = malloc(sizeof(nmemb) * size);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (!mem)
		return (NULL);
	return (mem);
}
