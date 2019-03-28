#include "lists.h"
/**
 * switch_rec - switch nodes of a listint_t linked list recursively.
 * @head: pointer to list.
 * Return: nth node.
 */
listint_t *switch_rec(listint_t *head, listint_t *current_node, listint_t *tmp_node)
{
	if (current_node)
	{
		tmp_node = current_node->next;
		current_node->next = head;
		head->next = tmp_node;
		switch_rec(current_node, tmp_node, NULL);
	}
	return (head);
}
/**
 * reverse_listint - deletes a new at a given position.
 * @head: double pointer to list.
 * Return: head of new list.
 */
listint_t *reverse_listint(listint_t **head)
{
	if (head && *head)
		return (switch_rec(*head, (*head)->next, NULL));
	return (NULL);
}
