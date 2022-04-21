#include "lists.h"

/**
 * add_node - adds a new node at the beg of list_t
 * @head:  first node
 * @str: string element in the node
 *
 * Return: address of new element or NULLif failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (!head)
	{
		return (NULL);
	}

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
/**
 * _strlen - returns length of a string
 * @str: string
 *
 * Return: len of str
 */
int _strlen(const char *str)
{
	int i;
	int output = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		output += 1;
	}
	return (output);
}
