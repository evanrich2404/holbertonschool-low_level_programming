#include "main.h"


/**
 * _strcat - appends src to dest ow termnull end with new null
 * Return: pointer to the resulting string dest
 * @dest: string input
 * @src: string input
 */

char *_strcat(char *dest, char *src)
{
	int i, n;
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);


	for (i = dest_len, n = 0; n < src_len; n++, i++)
		dest[i] = src[n];
	dest[dest_len + src_len] = '\0';
	return (dest);
}
