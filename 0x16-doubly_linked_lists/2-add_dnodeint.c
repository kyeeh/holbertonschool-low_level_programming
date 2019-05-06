#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to list head.
 * @n: integer to be included in the new node.
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp_node = NULL;

	if (head)
		tmp_node = *head; /* Address of the header */
	*head = malloc(sizeof(dlistint_t));
	if (*head)
	{
		(*head)->n = n;
		(*head)->prev = NULL;
		(*head)->next = tmp_node; /* New Head points to old_head */
		if (tmp_node)
			tmp_node->prev = *head; /* Old Head points to new_head */
	}
	return (*head);
}
