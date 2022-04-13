#include "function_pointers.h"

/**
 * int_index -  searches for an integer.
 * @size: number of elements in the array array
 * @cmp:  pointer to the function to be used to compare values
 * Return: int or -1 if no element match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	
	for (i = 0; i < size; i++)
	{
			if (cmp(array[i]) > 0)

				return (i);
	}
	return (-1);
}

