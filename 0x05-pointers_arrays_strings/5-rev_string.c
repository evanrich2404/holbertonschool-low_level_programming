#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 * Return: string, forwards and backwards
 */

void rev_string(char *s)
{
	int i, length = _strlen(s);
	int middle = length / 2;
	char temp;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
/**
 * _strlen - using this from file 2
 * @s: string to measure the length of
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
