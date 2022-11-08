#include "main.h"
/**
 * binary_to_uint - converts binary str to uint
 * @b: inbound binary char *arg
 * Return: converted int or 0 on erroneous b str
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int Uint = 0, dC = 0;
	int biLen;

	if (!(b))
	{
		return (0);
	}
	for (biLen = 0; b[biLen]; biLen++)
	{
		if (b[biLen] != '0' && b[biLen] != '1')
		{
			return (0);
		}
	}
	biLen--;
	for (; biLen >= 0; biLen--)
	{
		if (b[biLen] == '1')
		{
			Uint += 1 << dC;
		}
		dC++;
	}
	return (Uint);
}
