#include "main.h"

/**
  * list_len - find number of elements in linked list
  * @h: pointer to start of the list
  * Return: number of elements
  */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while(h)
	{
		count++;
		h = h-> next;
	}
	return (count);
}
