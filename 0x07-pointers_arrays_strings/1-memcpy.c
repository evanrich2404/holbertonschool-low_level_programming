#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination input
 * @src: memory area input
 * @n: number of bytes input
 * Return: value of src
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (src);
}
