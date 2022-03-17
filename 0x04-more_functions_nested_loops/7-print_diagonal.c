#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int a = n, j;



	if (n > 0)

	{

		while (n > 0)

		{

			for (j = a - n; j > 0; j--)
			{

				_putchar(' ');

			}

			_putchar('\\');

			_putchar('\n');

			n--;

		}

	}

	else

	{

		_putchar('\n');

	}

}
