#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;
	hash_node_t *temp;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			flag = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
