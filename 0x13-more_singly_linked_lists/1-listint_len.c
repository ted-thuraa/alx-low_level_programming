#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: node pointer
 * @Return: no of elements 
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	 while (h)
	 {
		 h = h->next;
		 count++;
	 }
	 return (count);
}
