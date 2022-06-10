#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: the head node given to us
 * @index: the index position we want to delete
 *
 * Return: 1 if success -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	while (count != index && temp)
	{
		count++;
		if (temp)
			temp = temp->next;
	}
	if (!temp) /* if we are null, looped too far */
		temp->next->prev = temp->prev;
	if (index == 0) /* if this is 0 then cut off first node */
		*head = (*head)->next;
	free(temp);
	return (1);
}
