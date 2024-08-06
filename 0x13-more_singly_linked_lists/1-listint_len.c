#include "lists.h"

/**
  * listint_len - return number of elemnts of linked list
  * @h: single linked list
  * Return: number of elements
  */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);

}
