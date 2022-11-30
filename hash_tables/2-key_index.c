#include "hash_tables.h"
/**
* key_index - finds a key index of any key given
* @size: the size of hash table
* @key: what we are trying to find
* Return: the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
