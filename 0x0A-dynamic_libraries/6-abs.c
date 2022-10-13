#include "main.h"

/**
 * _abs - shows absolute value of an integer
 * @v: integer input
 * Return: absolute value of v
 */
int _abs(int v)
{
	return (v * ((v > 0) - (v < 0)));
}
