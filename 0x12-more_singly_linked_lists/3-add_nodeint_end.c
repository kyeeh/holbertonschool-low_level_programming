#include "lists.h"
/**
 * add_nodeint_end_rec - adds the element at the end  of a 
 * listint_t list recursively.
 * @head: double pointer to list.
 * @n: integer to be added into the new node.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end_rec(listint_t *head, listint_t *tmp_node)
{
	if (head->next)
		tmp_node = add_nodeint_end_rec(head->next, tmp_node);
	else
		head->next = tmp_node;
	return (tmp_node);
}
/**
 * add_nodeint_end - adds the element at the end  of a listint_t 
 * list recursively.
 * @head: double pointer to list.
 * @n: integer to be added into the new node.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp_node = malloc(sizeof(listint_t));

	if (!tmp_node)
		return (NULL);
	if (*head)
		tmp_node = add_nodeint_end_rec(*head, tmp_node);
	else
		*head = tmp_node;
	tmp_node->n = n;
	tmp_node->next = NULL;
	return (tmp_node);
}
