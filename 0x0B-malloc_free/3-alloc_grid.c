#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2d array
 * @width: self explainatory. the rows.
 * @height: probably not the width. the vert
 * Return: the pointer or null if failure
 */

int **alloc_grid(int width, int height)
{
	int **pointer;

	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	if (width > INT_MAX || height > INT_MAX)
		return (NULL);

	pointer = malloc(height * sizeof(int *));
	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		pointer[i] = malloc(width * sizeof(int));
		if (pointer[i] == NULL)
		{
			for ( ; i >= 0; i--)
				free(pointer[i]);
			free(pointer);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			pointer[i][j] = 0;
	return (pointer);
}
