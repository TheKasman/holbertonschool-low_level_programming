#include "hash_tables.h"

/**
 * hash_table_set - puts something into the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * Return: 1 if success, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int keyPos;

	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);

	/*are the elements bad?*/
	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	/*get our key position to slap into the hash table*/
	keyPos = key_index((unsigned char *)key, ht->size);

	node->key = strdup(key);
	node->value = strdup(value);

	node->next = ht->array[keyPos];
	ht->array[keyPos] = node;

	return (1);
}
