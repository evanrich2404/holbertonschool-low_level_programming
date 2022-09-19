#include <stdio.h>
/* print base 10 by Evan R. */
/**
 * main - printing base 10
 * Return: is 0
 */
int main(void)
{
	int n = 0;
	/* printing base 10 */
	while (n <= 9)
	{
		putchar(n + 48);
		n++;
	}
	putchar('\n');
	return (0);
}
