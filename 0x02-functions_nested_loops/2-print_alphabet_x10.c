#include "main.h"

/**
 * main -  prints ten times the alphabet, in lowercase, followed by a new line
 *
 * return 0
 */

void print_alphabet_x10(void)

{

	char l;

	int j;


	for (j = 0; j < 10; j++)

	{

		for (l = 'a'; l <= 'z'; l++)

		{

			_putchar(l);
		}

		_putchar(10);

	}

}
