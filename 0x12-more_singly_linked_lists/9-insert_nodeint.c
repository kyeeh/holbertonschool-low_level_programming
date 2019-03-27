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
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to list.
 * @idx: index of inserting position.
 * @n: data for new node insertion.
 * Return: the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i = 0;
	listint_t *new_node, *tmp_node;

	if (head)
	{
		new_node = malloc(sizeof(listint_t));
		if (*head)
		{
			tmp_node = get_node_rec(*head, idx, i);
			if (tmp_node)
			{
				if (new_node)
				{
					new_node->n = n;
					new_node->next = tmp_node->next;
					tmp_node->next = new_node;
					return (new_node);
				}
			}
		}
		else
		{
			*head = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
