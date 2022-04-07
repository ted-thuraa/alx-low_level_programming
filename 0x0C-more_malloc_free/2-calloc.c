#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of elements to be allocated
 * @size: the sizeof data type
 * Return: a pointer or null if any error
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			array[i] = 0;
		}
	}
	else
		return(NULL);
	return(array);
}
