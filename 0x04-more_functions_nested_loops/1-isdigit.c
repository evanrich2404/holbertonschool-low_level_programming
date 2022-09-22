#include "main.h"

/**
 * _isdigit - function that checks if something is a digit
 * @c: single digit input
 * Return: 1 if c is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
