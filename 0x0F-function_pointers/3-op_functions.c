#include "3-calc.h"

/**
 * op_add - Add two ints
 * @a: first int to add
 * @b: second int to add
 *
 * Return: A + B
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Add two ints
 * @a: first int to subtract
 * @b: second int to subtract
 *
 * Return: A - B
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Add two ints
 * @a: first int to multiply
 * @b: second int to multiply
 *
 * Return: A * B
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two ints
 * @a: first operand
 * @b: second operand
 *
 * Return: A / B
 */
int op_div(int a, int b)
{

	if (b == 0)
	{
		printf("ERROR");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Add two ints
 * @a: first operand
 * @b: second operand
 *
 * Return: A % B
 */
int op_mod(int a, int b)
{

	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}

	return (a % b);
}
