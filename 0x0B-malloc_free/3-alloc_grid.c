#include "main.h"
/**
 * alloc_grid - returns a ptr to a 2D array of ints
 * @width: input for width
 * @height: input for height
 * Return: allocated grid
 */
int **alloc_grid(int width, int height)
{
	int **out;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	out = (int **)malloc(sizeof(int *) * height);

	if (out == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		out[i] =malloc(sizeof(int) * width);
		if (out[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(out[i]);
			free (out);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			out[i][j] = 0;
	return (out);
}
