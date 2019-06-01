#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @key: key can not be an empty string
 * @ht: the hash table you want to add or update the key/value to
 *
 * Return: the value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp_node;
	unsigned long int index;

	if (ht && key)
	{
		index = key_index((const unsigned char *)key, ht->size);
		if (ht->array[index])
		{
			tmp_node = ht->array[index];
			while (tmp_node)
			{
				if (strcmp(tmp_node->key, (char *)key) == 0)
					return (tmp_node->value);
				tmp_node = tmp_node->next;
			}
		}
	}
	return (NULL);
}
