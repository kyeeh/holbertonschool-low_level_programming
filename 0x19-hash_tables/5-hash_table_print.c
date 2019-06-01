#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	char *sep;
	hash_node_t *tmp_node;
	unsigned long int index;

	if (ht && ht->array)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			tmp_node = ht->array[index];
			while (tmp_node)
			{
				printf("%s'%s': '%s'", sep, tmp_node->key, tmp_node->value);
				tmp_node = tmp_node->next;
				sep = ", ";
			}
		}
		printf("}\n");
	}
}
