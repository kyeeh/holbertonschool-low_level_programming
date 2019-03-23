#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list.
 * @h: pointer to list.
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	unsigned int n = 0;
	const list_t *tmp_node = h;

	while (tmp_node)
	{
		if (tmp_node->str)
			printf("[%u] %s\n", tmp_node->len, tmp_node->str);
		else
			printf("[0] (nil)\n");
		tmp_node = tmp_node->next;
		n++;
	}
	return (n);
}
