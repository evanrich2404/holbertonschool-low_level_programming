#include "holberton.h"

/**
 * _strlen - function that returns the length of a string
 * @s: input value
 * Return: is length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
