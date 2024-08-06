#include "lists.h"

/**
  * pop_listint - delete first node of list
  * @head: list
  * Return: data of deleted node
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
		return (0);

	temp = (*head)->next;
	number = (*head)->n;
	free(*head);
	*head = temp;

	return (number);

}
