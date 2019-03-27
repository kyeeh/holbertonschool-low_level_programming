#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to list.
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
/**
 * pop_listint - deletes the head node of a listint_t linked list, and
 * returns the head node’s data
 * @head: pointer to pointer to list.
 */
int pop_listint(listint_t **head)
{
	int n;

	if (head)
	{
		head = (*head)->next;
		n = (*head)->n;
		free(*head);
		return (n);
	}
	return (0);
}
