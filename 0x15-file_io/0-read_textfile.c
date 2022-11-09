#include "main.h"
/**
 * read_textfile - reads text writes to stdout
 * @filename: pointer to file
 * @letters: num of chars to read from file and write to stdout
 * Return: number of chars read and written or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *doCpy;
	int checkOpen = 0, checkRead = 0, checkWrite = 0;

	if (!(filename))
	{
		return (0);
	}
	doCpy = malloc(letters);
	if (!(doCpy))
	{
		return (0);
	}
	checkOpen = open(filename, O_RDONLY);
	checkRead = read(checkOpen, doCpy, letters);
	checkWrite = write(STDOUT_FILENO, doCpy, checkRead);
	if (checkOpen < 0 || checkRead < 0 ||
	checkWrite < 0 || checkWrite != checkRead)
	{
		free(doCpy);
		return (0);
	}
	free(doCpy);
	close(checkOpen);
	return (checkWrite);
}
