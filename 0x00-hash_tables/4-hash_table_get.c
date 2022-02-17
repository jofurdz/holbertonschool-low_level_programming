#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 *
 * Return: value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = key_index((const unsigned char *)key, ht->size);
	hash_node_t *temp = ht->array[i];


	while (temp != NULL && strcmp(key, temp->key) != 0)
		temp = temp->next;
	if (temp == NULL || temp->key == NULL)
		return (NULL);
	return (temp->value);
}
