#include "lists.h"

/**
  * insert_nodeint_at_index - insert node at a given position in linked list
  * @head: linked list
  * @idx: index
  * @n: data
  * Return: address of new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;

	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	new->next = temp->next;
	temp->next = new;

	return (new ? new : NULL);
}
