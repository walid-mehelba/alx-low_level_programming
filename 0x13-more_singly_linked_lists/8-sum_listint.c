#include "lists.h"

/**
  * sum_listint - sum of all data inside linked list
  * @head: linked list
  * Return: sum
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (!head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
