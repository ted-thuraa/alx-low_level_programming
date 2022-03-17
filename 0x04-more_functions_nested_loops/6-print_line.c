#include "main.h"

/**
 * print_line - draws a straight line on the terminal.
 * @n: is the number of times the character _ should be printed
 *
 * Return:void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
