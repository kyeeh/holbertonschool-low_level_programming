#include "lists.h"
/**
 * list_len -  prints and return the number of elements of a list_t list.
 * @h: pointer to list.
 * Return: number of nodes.
 */
size_t list_len(const list_t *h)
{
	unsigned int n = 0;
	const list_t *tmp_node = h;

	while (tmp_node)
	{
		tmp_node = tmp_node->next;
		n++;
	}
	return (n);
}
