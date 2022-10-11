#include "main.h"
/**
 * main - adds positive numbers
 * @argc: counts arguments
 * @argv: array of arguments
 * Return: 1 if error, otherwise 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(atoi(argv[i])))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
