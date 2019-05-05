#include "lists.h"

/**
 * dlistint_len_rec - number of elements in a linked dlistint_t list.
 * @h: double linked list.
 * @elements: number of nodes.
 * Return: number of elements value.
 */
size_t dlistint_len_rec(const dlistint_t *h, size_t elements)
{
	if (h)
		elements = dlistint_len_rec(h->next, elements + 1);
	return (elements);
}

/**
 * dlistint_len - get the number of elements of a dlistint_t list.
 * @h: double linked list.
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	return (dlistint_len_rec(h, 0));
}
