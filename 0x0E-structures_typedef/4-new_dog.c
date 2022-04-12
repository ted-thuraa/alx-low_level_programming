#include "dog.h"

/**
 * new_dog - a pointer that we will return to dog_t
 *
 * @name: woofy mdwoofer
 *
 * @age: wofteen
 *
 * @owner: mr woof
 *
 * Description: makes a new structure that returns a pointer
 *
 * Return: the pointer or null if error
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *cpy_name;
	char *cpy_owner;
	dog_t *temp;
	int a = _strlen(name);
	int b = _strlen(owner);

	cpy_name = malloc(sizeof(char *) * (a + 1));
	cpy_owner = malloc(sizeof(char *) * (b + 1));
	temp = malloc(sizeof(struct dog));

	if ((cpy_name) && (cpy_owner) && (temp))
	{
		_strcpy(cpy_name, name);
		_strcpy(cpy_owner, owner);
		(*temp).name = name;
		(*temp).owner = owner;
		(*temp).age = age;
	}
	else
	{
		free(cpy_name);
		free(cpy_owner);
		free(temp);

		return (NULL);
	}
	return (temp);
}

/**
 * _strlen - returns the length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;
	int counter;

	for (; s[i] != '\0'; i++)
	{
		counter += 1;
	}
	return (counter);
}

/**
 * _strcpy - copies string from source to destination
 * @dest: destination of string
 * @src: source of string
 * Return: dest string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	
	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
