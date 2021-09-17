#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - sum of the doubly linked list
 * @head: the head of doubly linked list
 * 
 * Return: the sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int suma = 0;

	if (head)
	{
		while (current != NULL)
		{
			suma += current->n;
			current = current->next;
		}
	}

	return (suma);
}
