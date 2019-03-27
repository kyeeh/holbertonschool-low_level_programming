#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to pointer to list.
 * Return: returns the head node’s data.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head && *head)
	{
		tmp = *head;
		n = (*head)->n;
		*head = (*head)->next;
		free(tmp);
		return (n);
	}
	return (0);
}
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
	/*if (!head && n <= index - 1)
		return (NULL);*/
	return (head);
}
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to list.
 * @index: index of inserting position.
 * @n: data for new node insertion.
 * Return: the address of the new node.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i = 0;
	listint_t *tmp_node, *bfr_node;

	if (head && *head)
	{
		if (index == 0)
		{
			pop_listint(head);
			return(1);
		}
		bfr_node = get_node_rec(*head, index, i);
		if (bfr_node)
		{
			tmp_node = bfr_node->next;
			bfr_node->next = bfr_node->next->next;
			free(tmp_node);
			return (1);
		}
	}
	return (-1);
}
