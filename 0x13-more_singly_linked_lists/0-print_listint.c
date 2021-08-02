#include "lists.h"
/**
 * print_listint - prints all the elemtents of the list
 * @h: listint_t
 *
 * Return: int.
 */
size_t print_listint(const listint_t *h)
{
	int iter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		iter++;
	}
	return (iter);
}
