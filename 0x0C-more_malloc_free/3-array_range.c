#include "main.h"

/**
 * array_range -  creates an array of integers.
 * @min: minimum int
 * @max: maximum int
 * Return: pointer to the array or NULL if error
 */

int *array_range(int min, int max)
{
	int i;
	int size;
	int *pointer;

	if (min > max)
		return(NULL);

	size = (max - min) + 1;

	pointer = malloc(sizeof(int) * size);

	if (pointer != NULL)
	{
		for (i = 0; i < size; i++)
		{
			pointer[i] = min;
			min++;
		}
	}
	else
		return(NULL);
	return(pointer);
}
