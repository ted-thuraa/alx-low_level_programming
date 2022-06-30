#include "main.h"

/**
 * _strchr - locates a character in string
 * @c: character to be located
 * @s:the string
 * Return: a pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] != '\0' && s[j] != c; j++)
	{
		continue;
	}

	if (s[j] == c)
		return (s + j);
	else
		return (NULL);
}
