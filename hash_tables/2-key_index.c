#include "hash_tables.h"
/**
 * key_index - Gives the index of a key.
 * @key: Key character for index.
 * @size: Size of the array of the hash table
 * Return: Index at which the key/value pair (hash_djb2(key) % size).
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
