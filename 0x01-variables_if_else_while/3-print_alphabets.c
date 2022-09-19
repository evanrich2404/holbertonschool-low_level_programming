#include <stdio.h>
/* printing the alphabet by Evan R. */

/**
 * main - printing alphabet twice
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
		CH++;
	}
	putchar('\n');
	return (0);
}
