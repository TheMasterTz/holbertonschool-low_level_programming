#include "lists.h"
/**
 * sum_listint - return the sum of all the data
 * @head: listint_t
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int j = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		j = j + head->n;
		head = head->next;
	}
	return (j);
}
