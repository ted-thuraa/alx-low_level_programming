#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: binary number to convert
 * Return: converted number or 0 if not 0 or 1 or b is null
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int t;
	const char *n = b;
	unsigned int base = 1;

	if (b == NULL)
	{
		return (0);
	}
	if ((*n != '0' || *n != '1'))
	{
		return (0);
	}
	n++;

	for (i = _strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] == 1)
		{
			t += base;
		}
		base *= 2;
	}
	return (t);
}
/**
 * _strlen - returns len of a string
 * @b: passed string
 * Return: len of string
 */
unsigned int _strlen(const char *l)
{
	int i;
	int output = 0;

	for (i = 0; l[i] != '\0'; i++)
	{
		output += i;
	}
	return (output);
}
