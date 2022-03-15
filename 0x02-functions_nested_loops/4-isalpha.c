#include "main.h"

/**
 * main - checks for alphabetic character.
 *
 * returns 1 if c is a letter, lowercase or uppercase
 *
 * returns 0 otherwise
 */
int _isalpha(int c)

{

	if ((c >= 97 && c <= 122) || (c <= 90 && c >= 65))

		return (1);

	else

		return (0);

}
