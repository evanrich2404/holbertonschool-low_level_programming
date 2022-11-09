#include "main.h"
/**
 * create_file - creates file and writes text into something
 * @filename: filename to create
 * @text_content: text to write to file
 * Return: 1 if success -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int txtLen = 0, oNum = 0, wNum = 0;

	if (!(filename))
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[txtLen])
		{
			txtLen++;
		}
	}
	oNum = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wNum = write(oNum, text_content, txtLen);
	if (oNum < 0 || wNum < 0)
	{
		return (-1);
	}
	close(oNum);
	return (1);
}
