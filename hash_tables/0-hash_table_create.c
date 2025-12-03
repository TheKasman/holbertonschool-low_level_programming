#include "hash_tables.h"


/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 * Return: returns a pointer to the hash table, or null if it went bad.
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t hashTable;

	hashTable = malloc(sizeof(hash_table_t));

	if (hashTable == NULL)
		return (NULL);

	hashTable->size = size;
	hashTable->array = calloc(size, sizeof(hash_node_t *));

	if(hashTable->array == NULL)
	{
		free(hashTable);
		return (NULL);
	}

	return (hashTable);
}
