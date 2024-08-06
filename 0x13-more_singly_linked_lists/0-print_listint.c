#include "lists.h"

/**
  * print_listint - print all elements of the list
  * @h: single linked list
  * Return: number of elements
  */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);

}
