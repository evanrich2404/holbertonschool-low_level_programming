#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * Return: either -1 if error or factorial of n
 * @n: given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
