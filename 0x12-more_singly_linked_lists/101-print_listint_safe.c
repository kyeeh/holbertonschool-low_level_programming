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
		n = print_list_rec(head->next, n + 1);
		printf("[%p] %i\n", (void *)head, head->n);
	}
	return (n);
}
/**
 * print_listint_safe - prints all the elements of a list in a save way.
 * @head: pointer to list.
 * Return: number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	if (head)
		return (print_list_rec(head, 0));
	exit(98);
}
