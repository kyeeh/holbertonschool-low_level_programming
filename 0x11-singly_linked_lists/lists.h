#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_s - linked list
 * @str: string pointer to store node data.
 * @len: string length.
 * @next: pointer to next node.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
