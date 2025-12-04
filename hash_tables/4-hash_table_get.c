#include "hash_tables.h"

/**
 * hash_table_get - gets the index of the hash table
 * @ht: the hash table
 * @key: the key we're using to search
 * Return: returns the value associated with the element. or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	/*quick leak check*/
	if (ht == NULL || key == NULL)
		return (NULL);

	/*variable assign*/
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		/*key found*/
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
