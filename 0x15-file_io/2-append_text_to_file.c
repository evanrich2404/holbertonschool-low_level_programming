#include "main.h"
/**
 * append_text_to_file - appends txt to file
 * @filename: pointer to file to appe
 * @text_content: text to appe to file
 * Return: 1 if succ -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
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
	oNum = open(filename, O_WRONLY | O_APPEND);
	wNum = write(oNum, text_content, txtLen);
	if (oNum < 0 || wNum < 0)
	{
		return (-1);
	}
	close(oNum);
	return (1);
}
