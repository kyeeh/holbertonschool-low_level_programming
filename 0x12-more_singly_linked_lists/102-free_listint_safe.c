#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to list.
 * @size: list' size.
 */
int free_listint(listint_t *head, int size)
{
	if (head)
	{
		size = free_listint(head->next, size + 1);
		free(head);
	}
	return (size);
}
/**
 * free_listint_safe - frees a listint_t list with double pointer.
 * @h: pointer to pointer to list.
 */
size_t free_listint_safe(listint_t **h)
{
	int size = 0;
	if (h && *h)
	{
		size = free_listint(*h, size);
		*h = NULL;
	}
	return (size);
}
