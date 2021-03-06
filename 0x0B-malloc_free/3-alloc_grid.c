#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - pointer to pointer to a 2 dimensional array.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to pointer.
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
			if (ptr[i] == NULL)
			{
				for (l = i; l >= 0; l--)
				{
					free(ptr[l]);
				}
			free(ptr);
			return (NULL);
			}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
return (ptr);
}
