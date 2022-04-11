#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: dtruct dog
 * Return: NULL
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
		{
			(*d).name = "(nil)";
		}
		if ((*d).owner == NULL)
		{
			(*d).owner = "(nil)";
		}
		printf("Name: %s\nAge: %f\nowner: %s\n", (*d).name, d->age, (*d).owner);
	}
}
