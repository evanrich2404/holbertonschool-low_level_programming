#include "main.h"
/**
 * main - prints number of arguements passed into it
 * @argc: counts arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i]; i++)
	{
		printf("%d\n", argc);
	}
	return (0);
}
