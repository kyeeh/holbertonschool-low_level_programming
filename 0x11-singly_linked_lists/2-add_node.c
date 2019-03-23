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
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to list head.
 * @str: pointer to String to be included in the new node.
 * Return: number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp_node;

	tmp_node = *head; /* Address of head node */
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
