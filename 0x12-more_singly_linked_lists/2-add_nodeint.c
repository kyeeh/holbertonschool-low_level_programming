#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to list head.
 * @n: integer to be included in the new node.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp_node;

	tmp_node = *head; /* Address of head node */
	*head = malloc(sizeof(listint_t));
	if (*head)
	{
		(*head)->n = n;
		(*head)->next = tmp_node; /* New Head points to old_head*/
	}
	return (*head);
}
