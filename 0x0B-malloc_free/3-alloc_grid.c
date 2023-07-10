#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **rows, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	rows = (int **)malloc(height * sizeof(int *));
	if (rows == NULL)
	{
		free(rows);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		rows[i] = (int *)malloc(width * sizeof(int));
		if (rows[i] == NULL)
		{
			for (j = 0; j < width; j++)
				free(rows[j]);
			free(rows);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			rows[i][j] = 0;
		}
	}
	return (rows);
}
