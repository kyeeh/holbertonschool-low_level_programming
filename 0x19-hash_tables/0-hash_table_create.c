#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: size of the array
 *
 * Return: On success pointer to hash_table_t.
 * On error, NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *new_ht = NULL;

	if (size > 0)
	{
		new_ht = malloc(sizeof(hash_table_t));
		if (new_ht)
		{
			new_ht->size = size;
			new_ht->array =  malloc(size * sizeof(hash_node_t *));
			if (!new_ht->array)
			{
				for (i = 0; i < size; i++)
					new_ht->array[i] = NULL;
				free(new_ht);
			}
		}
	}
	return (new_ht);
}
