#include "lists.h"

/**
 * list_len - returns the number of elements in a linkred list
 * @h: list
 *
 * Return: no of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
