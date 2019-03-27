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
 * free_listint2 - frees a listint_t list with double pointer.
 * @head: pointer to pointer to list.
 */
void free_listint2(listint_t **head)
{
	if (head)
    if (*head)
      free_listint(*head);
  *head = NULL;
}
