#include "main.h"
/**
 * main - prints number of arguements passed into it
 * @argc: counts arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		i++;
	}
	printf("%d\n", i - 1);
	return (0);
}
