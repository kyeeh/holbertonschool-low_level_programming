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
	hash_node_t *new_node;
	unsigned long int index;

	new_node = malloc(sizeof(hash_node_t));
	if (ht && key && (value != NULL) && new_node)
	{
		index = key_index((const unsigned char *)key, ht->size);
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
	return (0);
}
