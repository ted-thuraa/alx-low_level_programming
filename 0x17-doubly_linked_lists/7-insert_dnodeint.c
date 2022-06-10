#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @*h: pointer to head pointer
 * @idx: index where insertion will happen
 * @n: data to insert
 *
 * Return: inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	temp = *h;
	
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (count < idx - 1)
	{
		count++;
		if (temp)
			temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	new->next = temp->next;
	new->prev = temp;
	if (temp->next)
		temp->next->prev = new;
	temp->next = new;

	return (new);
}
