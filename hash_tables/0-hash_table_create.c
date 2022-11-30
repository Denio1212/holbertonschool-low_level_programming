#include "hash_tables.h"
/**
* hash_table_create - this will create a hash table
* @size: size of hash table
* Return: pointer to table or NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (!size)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));

	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	return (table);
}

		

	

