#include "main.h"
/**
 * errHand - handles errors for cp
 * @eNum: associated error number
 * @buff: buffer memory location
 * @a1: argv1 from main
 * @a2: argv2 from main
 * Return: void
 */
void errHand(int eNum, char *buff, char *a1, char *a2)
{
	free(buff);
	if (eNum == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (eNum == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a1);
		exit(98);
	}
	else if (eNum == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", a2);
		exit(99);
	}
}

/**
 * main - check the code
 * @argc: total arguments supplied to cp
 * @argv: pointer to array of argv strs supplied to cp
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *buff, *a1, *a2;
	int openRetVal1 = 0, openRetVal2 = 0, writeRetVal = 0,
	readRetVal = 0, closeVal1 = 0, closeVal2 = 0;

	a1 = argv[1];
	a2 = argv[2];
	buff = malloc(1024);
	if (argc != 3)
		errHand(97, buff, a1, a2);
	if (!(buff))
		exit(EXIT_FAILURE);
	openRetVal1 = open(argv[1], O_RDONLY);
	readRetVal = read(openRetVal1, buff, 1024);
	openRetVal2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (readRetVal < 0 || openRetVal1 < 0)
		errHand(98, buff, a1, a2);
	while (readRetVal > 0)
	{
		if (readRetVal < 0 || openRetVal1 < 0)
			errHand(98, buff, a1, a2);
		writeRetVal = write(openRetVal2, buff, readRetVal);
		if (writeRetVal < 0 || openRetVal2 < 0)
			errHand(99, buff, a1, a2);
		readRetVal = read(openRetVal1, buff, 1024);
		openRetVal2 = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buff);
	closeVal1 = close(openRetVal1);
	closeVal2 = close(openRetVal2);
	if (closeVal1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", closeVal1);
		exit(100);
	}
	if (closeVal2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", closeVal2);
		exit(100);
	}
	return (0);
}
