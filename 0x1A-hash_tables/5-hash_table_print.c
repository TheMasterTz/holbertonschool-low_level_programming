#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int iter = 0;
	hash_node_t *Node = NULL;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	while (iter < ht->size)
	{
		Node = ht->array[iter];
		while (Node != NULL)
		{
			if (flag == 1)
				printf(", ");

			printf("'%s': '%s'", Node->key, Node->value);
			flag = 1;
			Node = Node->next;
		}
		iter++;
	}
	printf("}\n");
}
