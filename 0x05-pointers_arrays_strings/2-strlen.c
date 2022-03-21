#include "main.h"

/**
 * _strlen: returns the length of a string
 * @s: a pointer given by the main function
 * Return: string length
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
