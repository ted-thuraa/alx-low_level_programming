#include "lists.h"

/**
 * _strlen - returns length of string
 * @str: the strii
 *
 * Return: length
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
/**
 * add_node_end - adds a node at the end of the list
 * @head: pointer to struct
 * @str: name of new node
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;
	list_t *last = *head;

	if (!head)
	{
		return (NULL);
	}
	add = malloc(sizeof(list_t));
	if (add == NULL)
	{
		return (NULL);
	}

	add->str = strdup(str);
	add->len = _strlen(str);
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = add;
	}
	return (add);
}
