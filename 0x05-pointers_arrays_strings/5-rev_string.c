#include "main.h"

/**
 * rev_string -reverses a string
 * @s: a pointer given by the main function
 * Return: void
 */
void rev_string(char *s)
{
	int var  = 0;
	int length;

	length = _strlen(s) - 1;

	while (length > var)
	{
		swap_char(s + length, s + var);
		length--;
		var++;
	}
}

/**
 *  _strlen - return the length of a a string
 *  @s: string to be checked
 *  Return: lenght of string
 */
int _strlen(char *s)

{

	int var;

	int output = 0;



	for (var = 0; s[var] != '\0'; var++)

	{

		output += 1;

	}

	return (output);

}

/**
 * swap_char - swap integers of a and b
 * @a: first integer
 * @b: second integer
 * Return: void funtion
 */
void swap_char(char *a, char *b)
{

	char var;



	var = *a;

	*a = *b;

	*b = var;

}
