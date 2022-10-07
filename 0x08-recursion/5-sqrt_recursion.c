#include "main.h"

/**
 * helper - helps _sqrt_recursion use recursion
 * @n: integer input
 * @i: root variable
 * Return: i
 */
int helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (helper(n, i + 1));
}
/**
 * _sqrt_recursion - returns square root of a number
 * Return: -1 on failure, otherwise sqrt n
 * @n: integer input
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(n, 0));
}
