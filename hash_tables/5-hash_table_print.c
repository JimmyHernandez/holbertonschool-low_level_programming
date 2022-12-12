#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: Hash table pointer.
 * Return: N/A.
 **/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *Node;
	unsigned long int I;
	unsigned char CommaFlag = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (I = 0; I < ht->size; I++)
	{
		if (ht->array[I] != NULL)
		{
			if (CommaFlag == 1)
			{
				printf(", ");
			}
			Node = ht->array[I];
			while (Node != NULL)
			{
				printf("'%s': '%s'", Node->key, Node->value);
				Node = Node->next;
				if (Node != NULL)
				{
					printf(", ");
				}
			}
			CommaFlag = 1;
		}
	}
	printf("}\n");
}
