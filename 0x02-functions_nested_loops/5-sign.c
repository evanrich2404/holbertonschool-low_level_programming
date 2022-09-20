#include "main.h"

/**
 * print_sign - prints a sign of the number (+, 0, -)
 * @n: single digit number or integer
 * Return: 1 if greater than zero, 0 if is zero, -1 if less than zero
 */
int print_sign(int n)
{
if (n > 0)
	print_sign('+');
	return (1);
else if (n == 0)
	print_sign('0');
	return (0);
else
	print_sign('-');
	return (-1);
}
