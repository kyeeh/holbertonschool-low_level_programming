#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to pointer to list.
 * Return: returns the head node’s data.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head && *head)
	{
		tmp = *head;
		n = (*head)->n;
		*head = (*head)->next;
		free(tmp);
		return (n);
	}
	return (0);
}
