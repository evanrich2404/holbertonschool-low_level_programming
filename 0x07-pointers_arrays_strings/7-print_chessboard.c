#include "main.h"

/**
 * print_chessboard - self explainatory lol
 * @a: input variable (i think a pointer to an array)
 * Return: NOTHING LOL
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
