#include "main.h"
#include "2-strlen.c"

/**
 * _strncat - appends src to dest
 * Return: pointer to the resulting string dest
 * @dest: string input
 * @src: string input
 * @n: input integer of how many bytes
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i, j = dest_len;

	for (i = 0; (i < n && src[i] != '\0'); i++, j++)
		dest[j] = src[i];
	return (dest);
}
