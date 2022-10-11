#include "main.h"
/**
 * main - adds positive numbers
 * @argc: counts arguments
 * @argv: array of arguments
 * Return: 1 if error, otherwise 0
 */
int main(int argc, char *argv[])
{
	int i, J, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (J = 0; *(argv[i] + J); J++)
			{
				if (!isdigit(*(argv[i] + J)))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else if (argc == 1 || argc == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
