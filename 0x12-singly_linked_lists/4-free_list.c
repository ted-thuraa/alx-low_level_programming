#include "lists.h"

/**
 * free_list - frees list_t
 * @head: passed list to be freed
 * Description: frees all malloced linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
