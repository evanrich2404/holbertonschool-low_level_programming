#include <stdio.h>
/* printing the alphabet by Evan R. */

/**
 * main - printing alphabet without e and q
 * Return: is 0
 */
int main(void)
{
	char ch = 'a';

	/* print almost all lowercase letters */

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
