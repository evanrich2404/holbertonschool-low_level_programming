#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: counts arguments
 * @argv: array of arguments
 * Return: is 0, unless it's 1
 */
int main(int argc, char *argv[])
{
	int i, o;

	if (argc > 2)
	{
		i = atoi(argv[1]);
		o = atoi(argv[2]);
		printf("%d\n", i * o);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
