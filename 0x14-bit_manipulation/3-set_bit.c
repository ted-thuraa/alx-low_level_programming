#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: inndeex
 * @n: integer
 * Return: 1 or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= 1UL << index;

	return (1);
}
