#include "lists.h"
/**
 * get_nodeint_at_index - return nth node of a linked list
 * @head: listint_t
 * @index: unsigned int
 *
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int iter = 0;

	while (node)
	{
		if (index == iter)
			return (node);
		
		iter++;
		node = node->next;
	}
	return (NULL);
}
