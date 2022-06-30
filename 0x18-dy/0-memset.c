#include "main.h"

/**
 * _memset - fills memory n with constant byte b
 * @n: size of bytes to be used
 * @s: destination of string
 * @b: character to replace with
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
