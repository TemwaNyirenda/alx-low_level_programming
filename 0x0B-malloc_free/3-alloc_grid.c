#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * alloc_grid - creates a memory space for a 2D array and intializes to 0
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: pointer to the 2D array, or NULL if failure, or width or height <= 0
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	/* need to allocate memory for each row first */
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* then need to allocate memory for each member in that row */
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			/* need to free memory allocated to ptr[i] */
			while (i >= 0)
			{
				free(ptr[i]);
			}
			/* need to return memory allocated to ptr */
			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
