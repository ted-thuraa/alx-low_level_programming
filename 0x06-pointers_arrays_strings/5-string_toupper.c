#include "main.h"

/**
 * string_toupper - changes lowercase letters to upper.
 * @s: string to upper
 * Return: s
 */

char *string_toupper(char *s)
{
	int v = 0;

	while (s[v] != '\0')
	{
		if (s[v] >= 'a' && s[v] <= 'z')
		{
			s[v] -= 32;
		}
		v++;
	}
	return (s);
}

	
