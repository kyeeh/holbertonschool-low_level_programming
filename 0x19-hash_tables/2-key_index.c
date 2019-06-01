#include "hash_tables.h"
/**
 * key_index - gives you the index of a key.
 * @key: pointer to key
 * @size: size of the array
 *
 * Return: index to store the key/value pair.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
