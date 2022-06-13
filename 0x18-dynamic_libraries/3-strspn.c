#include "main.h"

/**
 *  _strspn - gets the length of a prefix string
 *  @s: destination string
 *  @acccept: characters to check
 *  Return:  number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	int j = 0, output = 0;
	
	for (; s[j] != '\0'; j++)
	{
		if (_strchr(accept, s[j]) == NULL)
		{
			break;
		}
		output++;
	}
	return (output);
}
