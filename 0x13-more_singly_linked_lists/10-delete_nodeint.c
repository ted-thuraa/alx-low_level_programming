#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a given index
 * @*head: node
 * @index: index
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;
	listint_t *before;

	if (!(*head))
	{
		return (-1);
	}
		temp = *head;
		before = *head;
		if (index == 0)
		{
			temp = temp->next;
			free(*head);
			(*head) = temp;
			return (1);
		}
		for (i = 0; i < index; i++)
		{
			if (temp == 0)
			{
				return (-1);
			}
			if (i < index - 1)
			{
				before = before->next;
			}
			temp = temp->next;
		}
		before->next = temp->next;
		free(temp);
		return (1);
}
