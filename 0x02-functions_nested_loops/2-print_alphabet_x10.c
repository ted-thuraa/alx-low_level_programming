#include "main.h"

/**
 * print_alphabet_x10 - program that shows the alphabet 10 times
 * Description: Uses headers to link to another function and a nested loop
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
