#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * _strlen - calculated the string length.
 * @str: pointer to String to be checked.
 * Return: string length.
 */
unsigned int _strlen(const char *str)
{
	unsigned int length = 0;

	while (str[length])
		length++;
	return (length);
}

/**
 * last_node - return the last_node of a list.
 * @h: pointer to list.
 * Return: last node.
 */
list_t *last_node(list_t *h)
{
	list_t *tmp_node = h;

	while (tmp_node)
		tmp_node = tmp_node->next;
	return (tmp_node);
}
/**
 * add_node_end - adds a new node at the beginning of a list_t list.
 * @head: pointer to list head.
 * @str: pointer to String to be included in the new node.
 * Return: list of nodes.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp_node;

	tmp_node = last_node(*head); /* Address of last node */
	*head = malloc(sizeof(list_t));
	if (*head)
	{
		if (str)
		{
			(*head)->len = _strlen(str);
			(*head)->str = strdup(str);
		}
		else
		{
			(*head)->len = 0;
			(*head)->str = "(nil)";
		}
		(*head)->next = tmp_node; /* New Head points to old_head*/
	}
	return (*head);
}
