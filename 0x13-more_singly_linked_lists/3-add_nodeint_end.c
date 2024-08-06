#include "lists.h"

/**
  * add_nodeint_end - add node at the end of the list
  * @head: head of the list
  * @n: data of the new element
  * Return: address of the new element
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	while (head)
		head = head->next;

	head->next = new;

	return (new);
}
