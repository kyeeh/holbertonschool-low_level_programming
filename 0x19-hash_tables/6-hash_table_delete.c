#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table to print
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp_node, *aux_node;
	unsigned long int index;

	if (ht && ht->array)
	{
		for (index = 0; index < ht->size; index++)
		{
			tmp_node = ht->array[index];
			while (tmp_node)
			{
				aux_node = tmp_node->next;
				free(tmp_node->key);
				free(tmp_node->value);
				free(tmp_node);
				tmp_node = aux_node;
			}
		}
		free(ht->array);
	}
	free(ht);
}
