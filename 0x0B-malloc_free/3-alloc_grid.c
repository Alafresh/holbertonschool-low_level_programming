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
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(width * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < width)
	{
		ptr[i] = (int *)malloc(height * sizeof(int));
			if (ptr[i] == NULL)
			{
				for (; i < 0; i--)
				{
					free(ptr[i]);
				}
			free(ptr);
			return (NULL);
			}
		i++;
	}
	while (i < width)
	{
		for (j = 0; j < height; j++)
			ptr[i][j] = 0;
	}
return (ptr);
}
