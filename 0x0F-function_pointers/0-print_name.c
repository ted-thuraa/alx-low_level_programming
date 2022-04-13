#include "function_pointers.h"

/**
 * print_name - main function
 * @f: function pointing to
 * @name: the name you want printed
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)

		f(name);

}
