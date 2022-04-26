#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a lined list
 * @head: node
 * @index: index of the node
 * Return: nth node or NULL if the node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;
	
	if (!head)
	{
		return (NULL);
	}
	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	if (i == index)
	{
		return (temp);
	}
	return (NULL);
}
