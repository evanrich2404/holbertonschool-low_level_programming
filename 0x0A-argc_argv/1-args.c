#include "main.h"
/**
 * main - prints number of arguements passed into it
 * @argc: counts arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
