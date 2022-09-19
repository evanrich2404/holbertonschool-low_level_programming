#include <stdio.h>
/* printing the alphabet by Evan R. */

/**
 * main - printing alphabet
 * Return: is 0
 */
int main(void)
{
	char ch = 'z';

	/* print all lowercase letters */

	while (ch <= 'a')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
