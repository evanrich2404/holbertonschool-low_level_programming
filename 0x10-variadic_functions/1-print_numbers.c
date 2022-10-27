#include "variadic_functions.h"
/**
 * print_numbers - yes
 * @separator: constant pointer
 * @n: constant int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	printf("%i", va_arg(args, int));
	for (i = 1; i < n; i++)
	{
		printf("%s%i",
			((separator == NULL) ? "" : separator),
			va_arg(args, int));
	}
	printf("\n");
}
