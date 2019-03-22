#include <stdio.h>
#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: pointer to list.
 */
void free_list(list_t *head)
{
	list_t *tmp_node = head;

	if (tmp_node)
		free_list(tmp_node->next);
	else
		free(head);
}
