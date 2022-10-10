#include "main.h"
/**
 * main - function that prints its name follwed by \n
 * Description: must be able to work even if name has been changed
 * @argv: is an array
 * Return: is 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
