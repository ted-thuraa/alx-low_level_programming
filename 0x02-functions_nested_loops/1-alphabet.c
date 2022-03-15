#include "main.h"

/**
 * print_alphabet - program that prints out the alphabet with a new line
 * Description: Uses headers to link to another function
 * Return: int 0 when done and no errors
 *
 */
void print_alphabet(void)
{
	char l;

	l = 'a';
	while (l <= 'z')

	{
		_putchar(l);

		l++;

	}

	_putchar('\n');
}
