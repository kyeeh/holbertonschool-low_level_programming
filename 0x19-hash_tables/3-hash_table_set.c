#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @key: key can not be an empty string
 * @value:  is the value associated with the key. value must be duplicated.
 * @ht: the hash table you want to add or update the key/value to
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	char *new_value = strdup(value);
	hash_node_t *tmp_node = ht->array[index], *new_node = tmp_node;

	if (new_value)
	{
		while (tmp_node)
		{
			new_node = tmp_node;
			tmp_node = tmp_node->next;
		}
		tmp_node = new_node;
		new_node = malloc(sizeof(hash_node_t));
		if (new_node)
		{
			new_node->key = strdup(key);
			new_node->value = new_value;
			tmp_node = new_node;
		}
		else
			new_value = NULL;
	}
	return (index);
}
