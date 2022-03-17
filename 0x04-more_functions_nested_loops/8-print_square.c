#include "main.h"

/**
 * print_square -  prints a square, followed by a new line
 * @size - size of square
 * Return:void function
 */
void print_square(int size)
{
	int i, j;

	if (size > 1)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
