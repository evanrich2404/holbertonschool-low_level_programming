#include "main.h"
/**
 * _pow_recursion - takes x to the power of y
 * Return: -1 if y < 0, otherwise return r
 * @x: input integer
 * @y: integer that changes x
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y < 0)
		return (-1);
	else
		return (_pow_recursion(x, y - 1) * x);
}
