#include <stdio.h>
/* printing the alphabet by Evan R. */

/**
 * main - printing alphabet
 * Return: is 0
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/* print all lowercase letters */

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
		/* prints uppercase now */
		while (CH <= 'Z')
	{
		putchar(CH);
		ch++;
	}
	putchar('\n');
	return (0);
}
