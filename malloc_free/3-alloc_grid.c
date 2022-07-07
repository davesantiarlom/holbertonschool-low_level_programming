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
  int i, j;
  int *ptr = NULL;

  if (width <= 0 || height <= 0)
    return (NULL);

  ptr = (int *)malloc(width * height * sizeof(int));

  for (i = 0; i < width * height; i++)
    {
    }

  return (ptr);
}
