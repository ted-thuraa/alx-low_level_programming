#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first character, followed by a new line
 * @str: string to be printed
 * Return: void funtion
 */
void puts2(char *str)
{
	int var;

	for (var = 0; str[var] != '\0'; var++)
	{
		if (var % 2 == 0)
		{
			_putchar(str[var]);
		}
	}
	_putchar('\n');
}
