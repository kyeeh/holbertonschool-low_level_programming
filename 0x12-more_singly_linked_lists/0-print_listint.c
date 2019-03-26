#include "lists.h"

/**
 * print_list_rec - prints all the elements of a listint_t list recursively.
 * @head: pointer to list.
 * @n: number of nodes acumlated as param.
 * Return: number of nodes.
 */
size_t print_list_rec(const listint_t *head, unsigned int n)
{
	if (head)
	{
		printf("%i\n",head->n);
		n = print_list_rec(head->next, n + 1);
	}
	return (n);
}
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to list.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	return (print_list_rec(h,0));
}
