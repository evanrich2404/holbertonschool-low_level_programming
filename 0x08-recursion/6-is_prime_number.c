#include "main.h"

/**
 * helper - function to find prime number recursion
 * @n: input variable
 * @p: helper variable
 * Return: 1 or 0
 */
int helper(int n, int p)
{
	if (p == n)
		return (1);
	if (n % p == 0)
		return (0);
	return (helper(n, p + 1));
}
/**
 * is_prime_number - finds if int is prime number
 * @n: input variable
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (helper(n, 2));
}
