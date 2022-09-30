#include "holberton.h"
#include "_strlen.c"

/**
 * _strcat - appends src to dest ow termnull end with new null
 * Return: pointer to the resulting string dest
 * @dest: string input
 * @src: string input
 */

char *_strcat(char *dest, char *src)
{
	size_t dest_len = _strlen(dest);
	size_t n, i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return dest;
}
