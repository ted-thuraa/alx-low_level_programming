#include "main.h"

/**
 * malloc_checked -  allocates memory using malloc
 * @b: an int that is the size of the memory we want allocated
 * Return: a pointer to the alllocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
