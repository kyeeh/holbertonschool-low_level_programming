#include "lists.h"
/**
 * get_node_rec - get the nth node of a listint_t linked list recursively.
 * @head: pointer to list.
 * @n: number of nodes acumlated as param.
 * @index: index of node to return.
 * Return: nth node.
 */
listint_t *get_node_rec(listint_t *head, unsigned int index, unsigned int n)
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
 * get_nodeint_at_index - get the nth node of a listint_t linked list.
 * @head: double pointer to list.
 * @index: index of wanted node.
 * Return: the wanted node by index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int n = 0;
	listint_t *node;

	if (head)
	{
		node = get_node_rec(head, index, n);
		if (node)
			return (node);
	}
	return (NULL);
}
