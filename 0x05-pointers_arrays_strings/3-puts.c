#include "main.h"

/**
 * _puts:  prints a string, followed by a new line, to stdout
 * @str: a pointer given by the main function
 * Description: Uses headers to link and pointers to achieve goal
 *  Return: is void. no return
 */
void _puts(char *str)
{
	int var;

	for (var = 0; str[var] != '\0'; var++)
	{
		_putchar(str[var]);
	}
	_putchar('\n');
}
