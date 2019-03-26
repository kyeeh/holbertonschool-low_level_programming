#include "lists.h"

/**
 * listint_len_rec - returns the number of elements in a linked
 * listint_t list recursively.
 * @head: pointer to list.
 * @n: number of nodes acumlated as param.
 * Return: number of nodes.
 */
size_t listint_len_rec(const listint_t *head, unsigned int n)
{
	if (head)
		n = print_list_rec(head->next, n + 1);
	return (n);
}
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to list.
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	return (listint_len_rec(h, 0));
}
