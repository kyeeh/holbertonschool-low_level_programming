#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at the given position.
 * @head: double pointer to list.
 * @index: index of inserting position.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *bfr_node = *head, *tmp_node = *head;

	if (index == 0 && *head)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(tmp_node);
		}
		else
			*head = NULL;
		return (1);
	}
	while (i < index - 1 && bfr_node)
	{
		bfr_node = bfr_node->next;
		i++;
	}
	if (bfr_node)
	{
		tmp_node = bfr_node->next;
		if (tmp_node->next)
			tmp_node->next->prev = bfr_node;
		bfr_node->next = tmp_node->next;
		free(tmp_node);
		return (1);
	}
	return (-1);
}
