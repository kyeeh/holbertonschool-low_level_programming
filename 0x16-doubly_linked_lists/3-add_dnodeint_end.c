#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to list head.
 * @n: integer to be included in the new node.
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp_node = NULL, *new_node = malloc(sizeof(dlistint_t));

	if (new_node)
	{
		new_node->n = n;
		if (*head)
		{
			tmp_node = *head;
			while (tmp_node->next)
				tmp_node = tmp_node->next;
			tmp_node->next = new_node;
			new_node->prev = tmp_node;
		}
		else
			*head = new_node;
	}
	return (new_node);
}
