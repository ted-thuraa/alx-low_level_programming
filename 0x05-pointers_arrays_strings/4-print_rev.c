#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: a pointer given by the main function
 * Return:  is void. no return.
 */
void print_rev(char *s)
{
	int var;

	int length = _strlen(s);

	for (var = length - 1; var >= 0; var--)
	{
		_putchar(s[var]);
	}
	_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int var;

	int output = 0;
	for (var = 0; s[var] != '\0'; var++)
	{
		output += 1;
	}
	return(output);
}
