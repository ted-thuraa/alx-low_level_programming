#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src: source memory
 * @dest: destination memory
 * @n: size of bytes to be used
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n && dest[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
