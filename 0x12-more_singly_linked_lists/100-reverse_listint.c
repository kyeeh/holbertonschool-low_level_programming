#include "lists.h"
/**
 * get_node_rec - get the nth-1 node of a listint_t linked list recursively.
 * @head: pointer to list.
 * @n: number of nodes acumlated as param.
 * @index: index of node to return.
 * Return: nth node.
 */
listint_t *get_node_rec(listint_t *head, unsigned int index, unsigned int n)
{
	if (head && index > 0)
	{
		if (n == index - 1)
			return (head);
		head = get_node_rec(head->next, index, n + 1);
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
	int i = 0, index = 0;
	listint_t *tmp_node, *bfr_node;

	if (head && *head)
	{
		bfr_node = get_node_rec(*head, index, i);
		if (bfr_node)
		{
			tmp_node = bfr_node->next;
			bfr_node->next = bfr_node->next->next;
			free(tmp_node);
		}
	}
	return (*head);
}
