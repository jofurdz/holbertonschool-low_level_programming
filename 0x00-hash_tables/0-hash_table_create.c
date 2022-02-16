#include "hash_tables.h"
/**
 * hash_table_create - creates a has table
 * @size: size of array
 * Return: pointer to an array
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table = malloc(sizeof(hash_table_t));
unsigned int x;
if (hash_table == NULL)
	return (NULL);
hash_table->size = size;
hash_table->array = malloc(sizeof(hash_node_t *) * size);
if (hash_table == NULL)
{
	free(hash_table);
	return (NULL);
}
for (x = 0; x < size; x++)
	hash_table->array[x] = NULL;
return (hash_table);
}
