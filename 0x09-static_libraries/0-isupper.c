#include "main.h"

/**
 * _isupper - function to show if letters are uppercase
 * @c: single letter input
 * Return: 1 if c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
