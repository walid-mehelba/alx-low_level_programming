#include "lists.h"

/**
  * add_nodeint - add new node at the beginning of a list
  * @head: head of the list
  * @n: data of the new node
  * Return: address of the new node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	return (new);
}
