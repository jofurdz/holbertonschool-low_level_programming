#include  "hash_tables.h"
/**
 * key_index - index of a key
 * @key: key
 * @size:  size of hash table
 * Return: index at which key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}