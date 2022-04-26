#include "lists.h"

/**
 * sum_listint - returns sum of data (n)
 * @head: node
 * Return: sum of data (n) or 0 if list os empty
 */
int sum_listint(listint_t *head)
{
	int output = 0;
	listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}

	temp = head;
	while (temp != NULL)
	{
		output += temp->n;
		temp = temp->next;
	}
	return (output);
}
