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
	dlistint_t *h = head;
	int suma = 0;

	if (head)
	{
		while (h != NULL)
		{
			suma = h->n;
			h = h->next;
		}
	}

	return (suma);
}
