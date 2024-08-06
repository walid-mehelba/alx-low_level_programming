#include "lists.h"

/**
  * get_nodeint_at_index - return nth node of linked list
  * @head: linked list
  * @index: index of node
  * Return: node at nth index
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int n = 0;

	while (temp && n < index)
	{
		temp = temp->next;
		n++;
	}

	return (temp ? temp : NULL):
}
