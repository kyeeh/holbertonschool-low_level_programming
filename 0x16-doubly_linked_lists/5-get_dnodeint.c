#include "lists.h"
/**
 * get_node_rec - get the nth node of a dlistint_t linked list recursively.
 * @head: pointer to list.
 * @n: number of nodes acumlated as param.
 * @index: index of node to return.
 * Return: nth node.
 */
dlistint_t *get_node_rec(dlistint_t *head, unsigned int index, unsigned int n)
{
	if (head)
	{
		if (n == index)
			return (head);
		head = get_node_rec(head->next, index, n + 1);
	}
	return (head);
}
/**
 * get_dnodeint_at_index - get the nth node of a dlistint_t linked list.
 * @head: double pointer to list.
 * @index: index of wanted node.
 * Return: the wanted node by index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int n = 0;

	return (get_node_rec(head, index, n));
}
