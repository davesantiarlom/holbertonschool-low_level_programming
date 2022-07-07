#include "main.h"
#include <stdio.h>
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
	int **array, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
		for (; j < width; j++)
			array[i][j] = 0;
	return (array);
}

/**
* free_grid - A function that frees a 2D array of ints previously
* created by your malloc_grid function
* @grid: An input 2D array of integers to free
* @height: height of grid
* Return: Nothing
*/
 
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
