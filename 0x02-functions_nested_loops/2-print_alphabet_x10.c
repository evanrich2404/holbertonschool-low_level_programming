#include "main.h"

/**
 * print_alphabet_x10 - printing it 10 times
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char L;

	while (count++ <= 9)
	{
		for (L = 'a'; L <= 'z'; L++)
			_putchar(L);
		_putchar('\n');
	}
}
