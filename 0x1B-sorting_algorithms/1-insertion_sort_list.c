#include "sort.h"
/**
 * insertion_sort_list -  sorts a DLL of integers using the Insertion sort
 * @list: DLL to sort
 * Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
	int done = 0;
	listint_t *tmp_node, *aux_node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	tmp_node = (*list);
	aux_node = tmp_node->next;
	while (aux_node)
	{
		while (tmp_node)
		{
			if (aux_node->n < tmp_node->n)
			{
				if (aux_node->next)
					aux_node->next->prev = aux_node->prev;
				else
					done = 1;
				tmp_node->next = aux_node->next;
				aux_node->next = tmp_node;
				aux_node->prev = tmp_node->prev;
				if (tmp_node->prev)
					tmp_node->prev->next = aux_node;
				else
					*list = aux_node;
				tmp_node->prev = aux_node;
				tmp_node = aux_node->prev;
				print_list(*list);
			}
			else
			{
				aux_node = aux_node->next;
				tmp_node = tmp_node->next;
			}
		}
		if (done)
			break;
		aux_node = aux_node->next;
		tmp_node = aux_node->prev;
	}
}
