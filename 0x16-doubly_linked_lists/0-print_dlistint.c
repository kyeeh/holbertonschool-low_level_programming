#include "lists.h"

/**
 * print_dlistint_rec - prints all the elements of a dlistint_t list.
 * @h: double linked list.
 * @elements: number of nodes.
 * Return: elements value.
 */
size_t print_dlistint_rec(const dlistint_t *h, size_t elements)
{
	if (h)
	{
		printf("%i\n", h->n);
		elements = print_dlistint_rec(h->next, elements + 1);
	}
	return (elements);
}

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: double linked list.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	return (print_dlistint_rec(h, 0));
}
