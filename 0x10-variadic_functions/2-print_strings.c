#include "variadic_functions.h"
/**
 * print_strings - followed by a new line
 * @separator: constant pointer
 * @n: constant int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *h;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	h = va_arg(args, char *);
	printf("%s", (h == NULL) ? "(nil)" : h);
	for (i = 1; i < n; i++)
	{
		h = va_arg(args, char *);
		printf("%s%s",
			((separator == NULL) ? "" : separator),
			((h == NULL) ? "(nil)" : h));
	}
	printf("\n");
}
