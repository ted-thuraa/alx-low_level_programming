
#include "main.h"

/**
 * *_strcat - concatinates two strings
 * @dest: string being appended to
 * @src: sourcec string
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j, output = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		output += 1;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[output + j] = src[j];
	}
	dest[output + j] = '\0';
	return (dest);
}
