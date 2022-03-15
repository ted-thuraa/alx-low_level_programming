#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: an int passed from the main file
 * Return: int 0 when done and no errors
 */
int _islower(int c)
{
	if (c > 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
