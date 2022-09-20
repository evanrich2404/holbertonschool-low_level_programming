#include "main.h"
/* printing alphabet by Evan R */
/**
 * print_alpabet - prints the alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char L;

	for (L = 'a'; L <= 'z'; L++)
	{
		_putchar(L);
	}
	_putchar('\n');
}
