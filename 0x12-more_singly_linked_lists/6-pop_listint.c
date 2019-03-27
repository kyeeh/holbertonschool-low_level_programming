#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list, and
 * returns the head node’s data
 * @head: pointer to pointer to list.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head)
	{
		tmp = *head;
		n = (*head)->n;
		*head = (*head)->next;
		free(tmp);
		return (n);
	}
	return (0);
}
