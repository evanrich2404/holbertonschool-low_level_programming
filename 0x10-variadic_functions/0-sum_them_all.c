#include "variadic_functions.h"
/**
 * sum_them_all - get the sum of all parameters
 * @n: constant variable
 * Return: 0 if 0 otherwise return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if(n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
