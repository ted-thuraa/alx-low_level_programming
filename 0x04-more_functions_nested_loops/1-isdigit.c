#include "main.h"

/**
 * _isdigit: checks for a digit
 * @C : character checked if its a digit
 * return: 1 if c is a digit
 * o if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
