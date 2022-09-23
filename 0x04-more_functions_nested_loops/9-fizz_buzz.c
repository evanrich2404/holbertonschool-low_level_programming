#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print fizzbuzz and 1 to 100
 * Return: is 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
			printf("FizzBuzz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", n);
	}
}
