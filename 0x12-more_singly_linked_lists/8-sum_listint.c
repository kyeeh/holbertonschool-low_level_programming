#include "lists.h"
/**
 * sum_listint_rec - get the nth node of a listint_t linked list recursively.
 * @head: pointer to list.
 * @sum: sum of node's data.
 * Return: sum.
 */
int sum_listint_rec(listint_t *head, int sum)
{
	if (head)
		sum = sum_listint_rec(head->next, sum + head->n);
	return (sum);
}
/**
 * sum_listint - sum data of nodes on a listint_t linked list.
 * @head: pointer to list.
 * Return: the sum result.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
		return (sum_listint_rec(head, sum));
	return (0);
}
