#include <stdio.h>
/* print base 16 by Evan R. */
/**
 * main - printing base 16
 * Return: is 0
 */
int main(void)
{
	int n;
	char ch;
	/* printing base 16 */
	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
