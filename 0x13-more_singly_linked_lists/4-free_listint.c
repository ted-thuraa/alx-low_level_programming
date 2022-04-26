#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: node pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
