#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - A function that returns a pointer to a
* 2 dimensional array of integers
* @width: An input integer at number of columns
* @height: An input integer at number of rows
* Return: pointer to a 2D array, NULL on failure
*/

int **alloc_grid(int width, int height)
{
	int **matriz;
	int i, j;

	if (width <= 0 || height <= 0 || (height == 1 && width == 1))
		return (NULL);

	matriz = malloc(height * sizeof(int *));
	if (!matriz)
		return (NULL);

	for (i = 0; i < height ; i++)
	{
		matriz[i] = malloc(width * sizeof(int));

		if (!matriz[i])
		{
			for (i--; i >= 0; i--)
				free(matriz[i]);

			free(matriz);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			matriz[i][j] = 0;
	}

	return (matriz);
}
