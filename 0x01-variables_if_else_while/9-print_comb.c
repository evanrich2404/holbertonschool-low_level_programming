#include <stdio.h>
/* combinations by Evan R */
/**
 * main - printing all combinations of base 10
 * Return: is 0
 */
int main(void)
{
	int num;
	/* starting at 0 and adding up numbers */
	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
