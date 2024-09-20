#include "lists.h"

/**
  * dlistint_len - find number of elements in a linked list
  * @h: list
  * Return: number of elements
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
