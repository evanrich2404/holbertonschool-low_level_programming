#include <stdio.h>
/**
 * main - prints Programming is like a building a multilingual puzzle
 * Return: always 0
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(longintType));
	printf("Size of long long int: %zu byte\n", sizeof(longlongintType));
	printf("Size of float: %zu byte\n", sizeof(floatType));

	return (0);
}
