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

	if (tmp_node)
		while (tmp_node->next)
			tmp_node = tmp_node->next;
	return (tmp_node);
}
/**
 * add_node_end - adds a new node at the beginning of a list_t list.
 * @head: pointer to list head.
 * @str: pointer to String to be included in the new node.
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail_node, *new_node;

	tail_node = last_node(*head); /* Address of last node */
	new_node = malloc(sizeof(list_t));
	if (new_node)
	{
		if (tail_node)
			tail_node->next = new_node; /* Last_node_next points to new_node */
		if (str)
		{
			new_node->len = _strlen(str);
			new_node->str = strdup(str);
		}
		else
		{
			new_node->len = 0;
			new_node->str = "(nil)";
		}
		new_node->next = NULL;
		return (new_node);
	}
	return (NULL);
}
