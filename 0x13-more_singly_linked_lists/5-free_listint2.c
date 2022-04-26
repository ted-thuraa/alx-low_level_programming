#include "lists.h"

/**
 * free_listint2 - free a list
 * @*head: node pointer to pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
